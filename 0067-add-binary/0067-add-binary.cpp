class Solution {
public:
    string addBinary(string a, string b) {
      
        
          int carry= 0;
          string ans;
          int i=a.size()-1, j=b.size()-1;
          
         while(i >= 0 or j >= 0 or carry){
             
             if( i >= 0 and j >= 0 )
             {
                 int adig= a[i]-'0';
                 int bdig= b[j]-'0';
                 
                 int value= adig + bdig + carry;
                 int remain= value % 2;
                 
                 ans+=to_string(remain);
                 
                 carry = value / 2;
                 i--;
                 j--;
                 
             }
             
             else if( i >= 0 and j < 0 )
             {
                int adig= a[i]-'0';
                 
                 int value= adig + carry;
                 int remain= value % 2;
                 
                 ans+=to_string(remain);
                 
                 carry = value / 2;
                 i--;
             }
             
             else if( j >= 0 and i < 0)
             {
                 
                 int bdig= b[j]-'0';
                 
                 int value= bdig + carry;
                 int remain= value % 2;
                 
                 ans+=to_string(remain);
                 
                 carry = value / 2;
                 j--;
             }
             else
             {
                 ans+=to_string(carry);
                 carry=0;
             }
         }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


