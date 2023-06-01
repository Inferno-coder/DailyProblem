
class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1) return -1;
        
        int r = grid.size();
        int c = grid[0].size();
        
        vector<vector<int>> dis(r,vector<int> (c,1e9));

        dis[0][0] = 0;

        queue<pair<pair<int,int>,int>> q;

        q.push({{0,0},1});

        int ans = INT_MAX;

        vector<int> x = {-1,1,0,0,-1,1,-1,1};
        vector<int> y = {0,0,-1,1,-1,1,1,-1};

        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int dist = q.front().second;

            q.pop();

            if(i == r - 1 and j == c - 1){
               return dist;
            }

            for(int k = 0; k < 8;k++){
                int ni = i + x[k];
                int nj = j + y[k];

                if(ni >= 0 and ni < r and nj >= 0 and nj < c and grid[ni][nj] == 0 and dist + 1 < dis[ni][nj]){
                    dis[ni][nj] = dist + 1;
                    q.push({{ni,nj},dist+1});
                }
            }
        }
        
        return -1;
    }
};
