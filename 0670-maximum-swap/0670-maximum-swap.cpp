class Solution {
public:
    int maximumSwap(int num) {
        vector<int> digits;
        int temp = num;
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        reverse(digits.begin(), digits.end());

        vector<int> max_right(digits.size());
        max_right.back() = digits.back();
        
        for (int i = digits.size() - 2; i >= 0; --i) {
            max_right[i] = max(max_right[i + 1], digits[i]);
        }

        for (int i = 0; i < digits.size(); ++i) {
            if (digits[i] < max_right[i]) {
                for (int j = digits.size() - 1; j > i; --j) {
                    if (digits[j] == max_right[i]) {
                        swap(digits[i], digits[j]);
                        break;
                    }
                }
                break;
            }
        }

        int result = 0;
        for (int digit : digits) {
            result = result * 10 + digit;
        }
        
        return result;
    }
};
