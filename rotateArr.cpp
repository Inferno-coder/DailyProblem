  void rev(vector<int>&arr,int tot,int start,int end){
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;end--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
         d=d%n;
        rev(arr,n,0,d-1);
       rev(arr,n,d,n-1);
         rev(arr,n,0,n-1);
    }
