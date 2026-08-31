class Solution {
public:
    int minCost(int n, int i, int d, int c) {
        
        vector<int> dp(n + 1);

        dp[1] = i;

        for (int k = 2; k <= n; k++) {

            int mini = dp[k - 1] + i;

            if (k % 2 == 0) {
                mini = min(mini, dp[k / 2] + c);
            } 
            else {
                mini = min(mini, dp[k / 2] + c + i);
                mini = min(mini, dp[k / 2 + 1] + c + d);
            }

            dp[k] = mini;
        }

        return dp[n];
    }
};
