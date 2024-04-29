class Solution {
public:
   int minOperations(vector<int>& n, unsigned int k) {
    return popcount(reduce(begin(n), end(n), k, bit_xor<>()));
}
};