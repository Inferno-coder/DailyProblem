int countFreq(vector<int>& arr, int target) {
        // code here
         while(arr.size()){
            int val=arr.back();
            arr.pop_back();
            if(val==target) return 1+countFreq(arr, target);
        }
        return 0;
    }
