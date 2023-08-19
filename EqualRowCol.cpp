class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int totRow=grid.size();
        int totCol=grid[0].size();
        int res=0;
        vector<string>s;
        for(int i=0;i<totRow;i++){
            string temp="";
            
          for(int j=0;j<totCol;j++){
            temp=temp+"+"+to_string(grid[i][j]);
          }
          s.push_back(temp);
        }
       // for(auto it:s)cout<<it<<" ";
       // cout<<endl;
        for(int i=0;i<totCol;i++){
          string temp="";
          for(int j=0;j<totRow;j++){
          temp=temp+"+"+to_string(grid[j][i]);
          }
          for(int k=0;k<s.size();k++)if(s[k]==temp)res++;
        }
        
        return res;
    }
};
