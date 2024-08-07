class Solution {
public:
    vector<string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                           "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string> thousands = {"", "Thousand", "Million", "Billion"};

    string helper(int n) {
        if (n < 20) {
            return ones[n];
        }
        if (n < 100) {
            return tens[n / 10] + (n % 10 != 0 ? " " + helper(n % 10) : "");
        }
        if (n < 1000) {
            return ones[n / 100] + " Hundred" + (n % 100 != 0 ? " " + helper(n % 100) : "");
        }
        for (int i = 3; i >= 0; i--) {
            if (n >= pow(1000, i)) {
                return helper(n / pow(1000, i)) + " " + thousands[i] + (n % (int)pow(1000, i) != 0 ? " " + helper(n % (int)pow(1000, i)) : "");
            }
        }
        return "";
    }

    string numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }
        return helper(num);
    }
};


