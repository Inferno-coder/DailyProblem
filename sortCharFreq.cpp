 static bool byVal(pair<char,int>a,pair<char,int>b){
    return a.second>b.second;
    }
    string frequencySort(string s) {
        map<char,int>m;
        for(char ch:s)m[ch]++;
        vector<pair<char,int>>pairs;
        for(auto it:m)pairs.push_back(it);
        sort(pairs.begin(),pairs.end(),byVal);
        string res="";
        for(auto it:pairs){
            char c=it.first;
            int times=it.second;
            while(times-->0)res+=c;
        }
        return res;
    }
