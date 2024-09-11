class Solution {
public:
    int minimumChairs(string s) {
        int res = 0, max_chairs = 0;
        for (char i : s) {
            if (i == 'E') {
                res++;
            } else {
                max_chairs = std::max(res, max_chairs);
                res--;
            }
        }
        max_chairs = std::max(res, max_chairs);
        return max_chairs;
    }
};