 int LargButMinFreq(int arr[], int n) {
        // code here
        map<int,int>m;
        for(int i=0;i<n;i++)m[arr[i]]++;
        int mini=1000;
        for(auto &it:m)mini=min(mini,it.second);
        int maxi=0;
        for(auto &it:m){
            if(it.second==mini)
            maxi=max(maxi,it.first);
        }
      return maxi;
    }
