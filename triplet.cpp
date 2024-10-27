 bool findTriplet(vector<int>& arr) {
        // Your code
          sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=2;i--){
            int j=i-1;;
            int k=0;;
            while(k<j){
                if(arr[k]+arr[j]-arr[i]==0){
                    return true;
                }
                else if(arr[k]+arr[j]-arr[i]>0){
                    j--;
                }
                else{
                    k++;
                }
            }
        }
        return false;
    }
