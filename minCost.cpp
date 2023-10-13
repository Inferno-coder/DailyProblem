class Solution {
public:
int solve(int ind,vector<int>&cost,int sum){
if(ind>=cost.size()){
    return 0;
}
return min(cost[ind]+solve(ind,cost,sum),cost[ind+1]+solve(ind+2,cost,sum));
}
    int minCostClimbingStairs(vector<int>& cost) {
      
      return solve(0,cost,0);  
    }
};
