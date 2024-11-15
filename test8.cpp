class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
         int max=-1;
        for(int i:arr)if(max<i)max=i;
        int temp=max;
        max=-1;
        for(int i:arr)if(i!=temp && max<i)max=i;
        return max;
    }
};
