#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        // Check if the starting points are blocked
        if (grid[0][1] > 1 && grid[1][0] > 1) return -1;

        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int dirs[] = {1, 0, -1, 0, 1};

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({grid[0][0], 0, 0}); // Start at top-left corner

        while (!pq.empty()) {
            int time = pq.top()[0], row = pq.top()[1], col = pq.top()[2];
            pq.pop();

            if (row == n - 1 && col == m - 1) return time;
            if (visited[row][col]) continue;
            visited[row][col] = 1;

            for (int i = 0; i < 4; i++) {
                int r = row + dirs[i], c = col + dirs[i + 1];
                if (r < 0 || r >= n || c < 0 || c >= m || visited[r][c]) continue;

                int wait = (grid[r][c] - time) % 2 == 0 ? 1 : 0;
                pq.push({max(grid[r][c] + wait, time + 1), r, c});
            }
        }
        return -1;
    }
};
