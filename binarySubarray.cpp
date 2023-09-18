class Solution {
public:
    int solve(vector<int>&nums,int k){
    int i=0;
    int j=0;
    int sum=0;
    int res=0;
    while(j<nums.size()){
    sum+=nums[j];
    while(i<=j && sum>k)sum-=nums[i++];
    res+=(j-i+1);
    j++;
    }
    return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    return solve(nums,goal)-solve(nums,goal-1);
    }
};
