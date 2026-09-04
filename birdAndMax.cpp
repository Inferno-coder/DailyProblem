class Solution {
public:
    int maxFruits(vector<int>& arr, int m) {
        int n = arr.size();

        // First window
        long long sum = 0;
        for (int i = 0; i < m; i++) {
            sum += arr[i];
        }

        long long maxi = sum;

        // Normal circular sliding window
        for (int i = m; i < n + m - 1; i++) {
            sum += arr[i % n];
            sum -= arr[(i - m) % n];

            maxi = max(maxi, sum);
        }

        return maxi;
    }
};
