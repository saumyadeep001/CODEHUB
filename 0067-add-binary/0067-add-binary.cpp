class Solution {
public:
    string addBinary(string a, string b) {
       int i = a.length()-1;
        int  j= b.length()-1;
        string s;
        int sum =0;
        
        while(i>=0 or j>=0 || sum==1){
          
            sum+= (i>=0)?a[i--]-'0' : 0;
            cout << sum<<" ";
            sum+= (j>=0)?b[j--]-'0': 0;
            cout << sum<<endl;
            s = char(sum %2 + '0')+s ;
           sum/=2;
           
             }
       // s.tostirng(sum,2);  
        return s;
    }
};


