class Solution {
public:
   vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
    vector<string> ans;

    // Iterate through each word in the input vector
    for(int i = 0; i < words.size(); i++) {
        // Extract the current word
        string s = words[i];
        // Temporary string to store characters forming a word
        string temp = "";

        // Iterate through each character in the current word
        for(auto ch : s) {
            // If the separator is encountered and the resultant string is not empty,
            // push it into the answer vector and reset the temporary string
            if(ch == separator && temp != "") {
                ans.push_back(temp);
                temp = "";
            }
            // Adding characters to form a string until we encounter the separator
            if(ch != separator)
                temp += ch;
        }

        // Pushing the last string explicitly if it's not empty
        if(temp != "")
            ans.push_back(temp);
    }

    return ans;
  }
};