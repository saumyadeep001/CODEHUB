class Solution {
public:
    string multiply(string num1, string num2) {
         int m = num1.size();
    int n = num2.size();
    vector<int> result(m + n, 0);

    for (int i = m - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int start = 0;
    while (start < m + n - 1 && result[start] == 0) {
        ++start;
    }

    std::string resultStr;
    for (int i = start; i < m + n; ++i) {
        resultStr.push_back(result[i] + '0');
    }

    return resultStr.empty() ? "0" : resultStr;

    }
};