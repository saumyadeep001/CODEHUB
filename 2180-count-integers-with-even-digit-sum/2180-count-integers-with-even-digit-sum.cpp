class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for (int i = 1; i <= num; i++) {
            int sum_of_digits = 0, n = i;
            while (n > 0) {
                sum_of_digits += n % 10;
                n /= 10;
            }
            if (sum_of_digits % 2 == 0) cnt++;
        }
        return cnt;
    }
};
