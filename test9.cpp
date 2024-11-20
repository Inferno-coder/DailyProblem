vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        map<int, int> mp;
        int n = arr.size();
        vector<int> ans;
        
        // Counting each element as a value of that element and inserting in the Map
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        //Checking which elements are greater than one-third of total votes and inserting in answer vector
        for(auto it:mp)
        {
            if(it.second>(n/3))
                ans.push_back(it.first);
        }
        return ans;
    }
