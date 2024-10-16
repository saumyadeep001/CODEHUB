class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;

        sort(hand.begin(), hand.end());

        map<int, int> mp;

        for (int i : hand) {
            mp[i]++;
        }

        for (int i : hand) {
            if (mp[i] > 0) {
                for (int j = 0; j < groupSize; ++j) {
                    if (mp[i + j] == 0) {
                        return false;
                    }
                    mp[i + j]--;
                }
            }
        }

        return true;
    }
};