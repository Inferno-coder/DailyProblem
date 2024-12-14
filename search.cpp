 int search(vector<int>& arr, int key) {
        // complete the function here
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==key)return mid;
            if(arr[mid]>=arr[l]){
                if(key>=arr[l] && key<=arr[mid]){
                    h=mid-1;
                }
                else l=mid+1;
            }
            else{
                if(arr[mid]<=key && key<=arr[h]){
                    l=mid+1;
                }
                else h=mid-1;
            }
        }
        return -1;
    }
