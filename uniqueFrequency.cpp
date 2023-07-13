 bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int>m;
        for(int i=0;i<n;i++)m[arr[i]]++;
        set<int>s;
        for(auto &it:m){
            if(s.count(it.second))return false;
            s.insert(it.second);
        }
        return true;
    }
