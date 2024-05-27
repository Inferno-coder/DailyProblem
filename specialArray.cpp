class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<10000;i++){
           int temp=0;
           for(int j=0;j<n;j++){
            if(nums[j]>=i)temp++;
           }
           if(temp==i)return i;
        }
        return -1;
    }
};
