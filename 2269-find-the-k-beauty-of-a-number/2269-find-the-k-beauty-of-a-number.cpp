class Solution {
public:
    int divisorSubstrings(int num, int k) {
        // Convert the given integer 'num' to a string 'x'
        string x = to_string(num);
        
        // Get the length of the string 'x'
        int n = x.length();
        
        // Initialize a variable 'ans' to store the count of substrings
        int ans = 0;
        
        // Iterate through each substring of length 'k' in the string 'x'
        for(int i = 0; i <= (n - k); i++) {
            // Check if the substring is not equal to 0
            if (stoi(x.substr(i, k)) != 0)
                // Check if 'num' is divisible by the integer value of the substring
                if (num % stoi(x.substr(i, k)) == 0)
                    // Increment the answer count
                    ans++;
        }
        
        // Return the final count of substrings satisfying the conditions
        return ans;
    }
};
