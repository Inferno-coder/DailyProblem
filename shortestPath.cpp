int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
         vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        queue<pair<int, int>> q;
        q.push({0, 0});
        visited[0][0] = true;
        int steps = 0;

        while (!q.empty()) {
            int currentLayerSize = q.size();

            for (int i = 0; i < currentLayerSize; ++i) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if (x == X && y == Y) {
                    return steps;
                }

                for (const auto& dir : directions) {
                    int newX = x + dir.first;
                    int newY = y + dir.second;

                    if (newX >= 0 && newX < N && newY >= 0 && newY < M && A[newX][newY] == 1 && !visited[newX][newY]) {
                        q.push({newX, newY});
                        visited[newX][newY] = true;
                    }
                }
            }

            steps++;
        }

        return -1;
    }
