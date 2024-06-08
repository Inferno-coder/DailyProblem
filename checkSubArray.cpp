class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixModMap;
        prefixModMap[0] = -1;
        int prefixSum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            if (k != 0) {
                prefixSum %= k;
            }
            if (prefixModMap.find(prefixSum) != prefixModMap.end()) {
                if (i - prefixModMap[prefixSum] > 1) {
                    return true;
                }
            } else {
                prefixModMap[prefixSum] = i;
            }
        }
        
        return false;
    }
};
