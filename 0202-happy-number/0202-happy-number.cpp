class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            n = sumSqr(n);
        }
        return (n == 1);
    }
private:
    int sumSqr(int n) {
        int sum = 0;
        while (n) {
            sum += pow((n%10),2);
            n /= 10;
        }
        return sum;
    }
};
