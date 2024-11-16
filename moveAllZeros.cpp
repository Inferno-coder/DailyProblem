void pushZerosToEnd(vector<int>& arr) {
        // code here
        int ind=0;
        for(int i=0;i<arr.size();i++){
         if(arr[i]!=0){
             arr[ind]=arr[i];
             ind++;
         }   
        }
        for(int i=ind;i<arr.size();i++)arr[i]=0;
    }
