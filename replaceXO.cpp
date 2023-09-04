
class Solution {
public:
    bool isPos(int r, int c, int totr, int totc) {
        return r >= 0 && r < totr && c >= 0 && c < totc;
    }

    void dfs(int i, int j, int n, int m, vector<vector<char>>& mat, vector<vector<int>>& vis) {
        if (vis[i][j]) return;
        vis[i][j] = 1;
        int dir[5] = {0, -1, 0, 1, 0};
        for (int k = 0; k < 4; k++) {
            int nr = i + dir[k];
            int nc = j + dir[k + 1];
            if (isPos(nr, nc, n, m) && !vis[nr][nc] && mat[nr][nc] == 'O') {
                dfs(nr, nc, n, m, mat, vis);
            }
        }
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;

        // Add 'O' cells on the border to the queue
        for (int i = 0; i < m; i++) {
            if (mat[0][i] == 'O') q.push({0, i});
            if (mat[n - 1][i] == 'O') q.push({n - 1, i});
        }
        for (int i = 0; i < n; i++) {
            if (mat[i][0] == 'O') q.push({i, 0});
            if (mat[i][m - 1] == 'O') q.push({i, m - 1});
        }

        // Perform DFS from 'O' cells connected to the border
        while (!q.empty()) {
            auto temp = q.front();
            q.pop();
            int ith = temp.first;
            int jth = temp.second;
            dfs(ith, jth, n, m, mat, vis);
        }

        // Generate the result matrix
        vector<vector<char>> res(n, vector<char>(m, 'X'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 1) res[i][j] = 'O';
            }
        }
        return res;
    }
};
