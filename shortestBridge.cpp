#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Step 1: Find the first island and mark its cells as visited
        bool found = false;
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<int, int>> q;

        // DFS to find the first island
        for (int i = 0; i < m; i++) {
            if (found) {
                break;
            }
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    dfs(grid, visited, q, i, j);
                    found = true;
                    break;
                }
            }
        }

        // Step 2: BFS to expand the first island and find the second island
        int directions[4][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        int minFlips = 0;
        bool foundSecondIsland = false;

        while (!q.empty() && !foundSecondIsland) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for (auto dir : directions) {
                    int newRow = row + dir[0];
                    int newCol = col + dir[1];

                    if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
                        if (!visited[newRow][newCol]) {
                            if (grid[newRow][newCol] == 0) {
                                // Flip the water cell to land and mark it as visited
                                grid[newRow][newCol] = 1;
                                visited[newRow][newCol] = true;
                                q.push({newRow, newCol});
                            } else if (grid[newRow][newCol] == 1) {
                                // Found the second island
                                foundSecondIsland = true;
                                break;
                            }
                        }
                    }
                }

                if (foundSecondIsland) {
                    break;
                }
            }

            if (!foundSecondIsland) {
                minFlips++;
            }
        }

        return minFlips;
    }

    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, queue<pair<int, int>>& q, int row, int col) {
        int m = grid.size();
        int n = grid[0].size();

        if (row < 0 || row >= m || col < 0 || col >= n || visited[row][col] || grid[row][col] == 0) {
            return;
        }

        visited[row][col] = true;
        q.push({row, col});

        dfs(grid, visited, q, row - 1, col);
        dfs(grid, visited, q, row + 1, col);
        dfs(grid, visited, q, row, col - 1);
        dfs(grid, visited, q, row, col + 1);
    }
};
