  int maxi=-1;
        vector<int>res;
//Leader of the Array
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                res.push_back(a[i]);
                maxi=a[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
