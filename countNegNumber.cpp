#include<bits/stdc++.h>
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            vector<int>numbers=grid[i];
           auto it = std::upper_bound(numbers.begin(), numbers.end(), 0, std::greater<int>());
           if(it!=numbers.end()){
               
               int dist=distance(numbers.begin(),it);
               count+=(grid[0].size()-dist);
           }
        }
        return count;
    }
};
