class Solution {
public:
    int finalPositionOfSnake(int n, const std::vector<std::string>& commands) {
        int i = 0, j = 0;
    
        static const int moves[4][2] = {
            {-1, 0}, // UP
            {1, 0},  // DOWN
            {0, -1}, // LEFT
            {0, 1}   // RIGHT
        };
        static const std::unordered_map<std::string, int> directionIndex = {
            {"UP", 0},
            {"DOWN", 1},
            {"LEFT", 2},
            {"RIGHT", 3}
        };
        
        for (const std::string& c : commands) {
            auto move = directionIndex.at(c); 
            i += moves[move][0];
            j += moves[move][1];
        }
    
    
        return i * n + j;
    }
};
