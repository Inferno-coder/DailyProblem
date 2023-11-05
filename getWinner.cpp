class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = arr[0];
        int consecutiveWins = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > winner) {
                winner = arr[i];
                consecutiveWins = 1;
            } else {
                consecutiveWins++;
            }

            if (consecutiveWins == k) {
                return winner;
            }
        }

        return winner;
    }
};
