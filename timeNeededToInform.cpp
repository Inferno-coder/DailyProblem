class Solution {
public:
    int dfs(int employee, vector<int>& informTime, vector<vector<int>>& subordinates) {
        int maxTime = 0;
        for (int subordinate : subordinates[employee]) {
            maxTime = max(maxTime, dfs(subordinate, informTime, subordinates));
        }
        return informTime[employee] + maxTime;
    }

    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> subordinates(n);
        for (int i = 0; i < n; i++) {
            if (manager[i] != -1) {
                subordinates[manager[i]].push_back(i);
            }
        }
        return dfs(headID, informTime, subordinates);
    }
};
