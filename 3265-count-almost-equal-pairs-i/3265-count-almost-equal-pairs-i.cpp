class Solution {
public:
    bool f(int x, int y) {
        string a = to_string(x);
        string b = to_string(y);
        if (a == b) return true;

        while (a.size() < b.size()) a = "0" + a;
        while (b.size() < a.size()) b = "0" + b;

        int p1 = -1;
        int p2 = -1;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                if (p1 == -1) {
                    p1 = i;
                } else if (p2 == -1) {
                    p2 = i;
                } else {
                    return false;
                }
            }
        }

        if (p1 != -1 && p2 != -1) {
            swap(a[p1], a[p2]);
            return a == b;
        }

        return p1 == -1;
    }

    int countPairs(vector<int>& a) {
        int pairs = 0;
        for (int i = 0; i < a.size(); i++) {
            for (int j = i + 1; j < a.size(); j++) {
                if (f(a[i], a[j])) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};