class Solution {
public:
    bool isAcronym(vector<string>& words, string s){
        string str="";
        for(int i=0;i<words.size();i++)
        {
            string str1=words[i];
            str.push_back(str1[0]);
        }
        return s == str ? true : false;
    }
};
