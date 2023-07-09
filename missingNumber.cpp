 int missingNumber(int arr[], int n) 
    { 
        // Your code here
        set<int>s;
        for(int i=0;i<n;i++)s.insert(arr[i]);
        for(int i=1;i<999999;i++){
        if(s.count(i)==0)return i;
        }
        return -1;
    } 
