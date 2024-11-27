 int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        set<int>s;
        for(int i=0;i<n;i++)s.insert(arr[i]);
        for(int i=1;i<99999;i++){
        if(s.count(i)==0)return i;
        }
        return -1;
    }
