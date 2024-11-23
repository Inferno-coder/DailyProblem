class Solution {
public:

    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n=box.size();
        int m=box[0].size();
        for (int i = 0; i < n; i++) {
            int empty = m - 1;
            for (int j = m - 1; j >= 0; j--) {
                if (box[i][j] == '*') empty = j - 1;
                else if (box[i][j] == '#') {
                    box[i][j] = '.';
                    box[i][empty--] = '#';
                }
            }
        }
    vector<vector<char>> rotated(m, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rotated[j][n - 1 - i] = box[i][j];
            }
        }
        return rotated;
    }
};
