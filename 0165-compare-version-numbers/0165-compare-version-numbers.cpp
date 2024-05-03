class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a = 0, b = 0;
        for (int i = 0, j = 0; i < version1.size() || j < version2.size();) {
            while (i < version1.size() && version1[i] != '.') {
                a = a * 10 + (version1[i] - '0');
                i++;
            }
            while (j < version2.size() && version2[j] != '.') {
                b = b * 10 + (version2[j] - '0');
                j++;
            }

            if (a < b) return -1;
            else if (a > b) return 1;

            a = b = 0;
            i++;
            j++;
        }
        return 0;
    }
};





