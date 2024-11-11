class Solution {
public:

    bool isprime(int NumberToBeChecked)
    {
            if(NumberToBeChecked == 1)return false;
            if(NumberToBeChecked == 2)return true;
            for(int i=2;i<=sqrt(NumberToBeChecked);i++)
            {
                if(NumberToBeChecked % i == 0)
                {
                    return false;
                }
            }
            return true;
    }
                          
    int findPrime(int num,int prev)
    {
        int NumberToBeChecked = num-1;
        while(NumberToBeChecked > 0)
        {
            
            if(isprime(NumberToBeChecked) && ((num-NumberToBeChecked)>prev))return NumberToBeChecked;
            NumberToBeChecked = NumberToBeChecked - 1;
            
        }
        return 0;
    }
    bool isSorted(vector<int>&nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] <= nums[i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int prev=0;
        for(int i=0;i<nums.size();i++)               
        {
            int Leftprime = findPrime(nums[i],prev);
            nums[i] = nums[i] - Leftprime;
            if(isSorted(nums))
            {
                return true;
            }
            prev=nums[i];
        }
       
        return false;
    }
};
