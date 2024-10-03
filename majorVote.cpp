#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> findMajority(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) freq[num]++;
        
        vector<int> result;
        int n = nums.size();
        for (auto& entry : freq) {
            if (entry.second > n / 3) result.push_back(entry.first);
        }

        if (result.empty()) return {-1};
        sort(result.begin(), result.end());
        return result;
    }
};
