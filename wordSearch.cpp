#include <vector>
using namespace std;

class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string& word, vector<vector<bool>>& visited, int row, int col, int idx) {
        if (idx == word.length()) {
            return true;
        }

        int rows = board.size();
        int cols = board[0].size();

        if (row < 0 || row >= rows || col < 0 || col >= cols || visited[row][col] || board[row][col] != word[idx]) {
            return false;
        }

        visited[row][col] = true;

        if (backtrack(board, word, visited, row + 1, col, idx + 1) ||
            backtrack(board, word, visited, row - 1, col, idx + 1) ||
            backtrack(board, word, visited, row, col + 1, idx + 1) ||
            backtrack(board, word, visited, row, col - 1, idx + 1)) {
            return true;
        }

        visited[row][col] = false;

        return false;
    }

    bool isWordExist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (backtrack(board, word, visited, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
