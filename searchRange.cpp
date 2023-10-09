class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1 && target==nums[0])return {0,0}; 
        if(!binary_search(nums.begin(),nums.end(),target))return {-1,-1};
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        auto ub=upper_bound(nums.begin(),nums.end(),target);
        if(lb==nums.end())return {-1,-1};
        if(ub==nums.begin())return {-1,-1};
        return {static_cast<int>(lb-nums.begin()),static_cast<int>(ub-nums.begin()-1)};
    }
};
