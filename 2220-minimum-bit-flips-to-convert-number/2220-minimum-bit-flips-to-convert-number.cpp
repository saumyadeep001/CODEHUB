class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        
        string startBinary = toBinaryString(start);
        string goalBinary = toBinaryString(goal);
        
        for (int i = 0; i < startBinary.size(); i++) {
            if (startBinary[i] != goalBinary[i]) {
                cnt++;  
            }
        }
        return cnt;  
    }
    
private:
    string toBinaryString(int num) {
        return bitset<32>(num).to_string();
    }
};
