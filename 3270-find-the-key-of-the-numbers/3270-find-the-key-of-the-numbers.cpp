class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
    
        vector<int> digits1, digits2, digits3;

        while (num1 > 0 || num2 > 0 || num3 > 0) {
            digits1.push_back(num1 % 10);
            digits2.push_back(num2 % 10);
            digits3.push_back(num3 % 10);
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }

        int ans = 0, place = 1;

        for (size_t i = 0; i < digits1.size(); i++) {
            int mini = min({digits1[i], digits2[i], digits3[i]});
            ans += mini * place;
            place *= 10;
        }

        return ans;
    }
};
