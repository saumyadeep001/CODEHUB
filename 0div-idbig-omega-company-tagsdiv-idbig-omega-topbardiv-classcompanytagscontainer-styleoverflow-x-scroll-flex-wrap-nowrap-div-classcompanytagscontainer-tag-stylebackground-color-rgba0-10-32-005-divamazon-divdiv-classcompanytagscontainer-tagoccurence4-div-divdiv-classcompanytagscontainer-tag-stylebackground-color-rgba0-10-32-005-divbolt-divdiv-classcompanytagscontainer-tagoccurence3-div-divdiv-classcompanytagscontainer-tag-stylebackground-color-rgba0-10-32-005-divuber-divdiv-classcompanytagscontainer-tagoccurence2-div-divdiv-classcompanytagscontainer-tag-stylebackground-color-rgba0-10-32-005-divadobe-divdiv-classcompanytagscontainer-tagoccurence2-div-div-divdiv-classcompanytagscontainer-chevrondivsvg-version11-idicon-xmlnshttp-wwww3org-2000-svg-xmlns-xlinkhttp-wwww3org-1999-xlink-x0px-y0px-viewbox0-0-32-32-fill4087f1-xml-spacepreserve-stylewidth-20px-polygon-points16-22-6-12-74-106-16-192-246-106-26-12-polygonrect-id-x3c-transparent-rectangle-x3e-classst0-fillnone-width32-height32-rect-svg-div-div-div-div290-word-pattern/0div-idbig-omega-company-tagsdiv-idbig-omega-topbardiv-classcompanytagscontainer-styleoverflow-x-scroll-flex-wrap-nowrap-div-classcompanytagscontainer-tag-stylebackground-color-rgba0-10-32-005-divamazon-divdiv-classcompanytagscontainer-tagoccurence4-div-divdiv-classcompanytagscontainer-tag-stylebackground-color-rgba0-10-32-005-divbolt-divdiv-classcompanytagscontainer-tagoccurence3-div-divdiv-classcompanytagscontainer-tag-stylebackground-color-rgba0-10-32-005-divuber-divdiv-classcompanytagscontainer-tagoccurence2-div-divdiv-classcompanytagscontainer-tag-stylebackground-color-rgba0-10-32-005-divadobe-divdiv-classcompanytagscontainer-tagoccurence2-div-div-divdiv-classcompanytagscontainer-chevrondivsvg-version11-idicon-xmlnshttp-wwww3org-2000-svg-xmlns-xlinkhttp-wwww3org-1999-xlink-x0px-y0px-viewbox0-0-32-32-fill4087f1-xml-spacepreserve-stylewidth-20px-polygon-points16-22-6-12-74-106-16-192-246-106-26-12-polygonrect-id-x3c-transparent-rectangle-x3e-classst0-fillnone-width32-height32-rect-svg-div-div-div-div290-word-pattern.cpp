class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char , int> m1;
        map<string , int>m2;
        
        int n= s.size(),m=p.size();   
        int i =0, j=0;
        int r =1; int sa= 1;
         vector<int> V,V1;
        while(i<n and j<m){
            string w;
            while(i<n and s[i]!=' ')
                w+=s[i++];
            i++;
         if(m1[p[j]]==0)V.push_back(r),m1[p[j]]=r++;
              else V.push_back(m1[p[j]]);
             if(m2[w]==0)V1.push_back(sa),m2[w]=sa++;
            else V1.push_back(m2[w]);
         j++;
        }
        
          if(j<m or i<n)return false;
      
        if(V==V1)
        return true;
        return false;
        }
         
            
};

