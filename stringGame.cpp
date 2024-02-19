class Solution{
public:
    int minValue(string s, int k){
       auto compare = [](pair<char, int> a, pair<char, int> b) {
            return a.second < b.second;
        };
        
        priority_queue<pair<char, int>, vector<pair<char, int>>, decltype(compare)> pq(compare);
        
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp)pq.push({it.first,it.second});
        while(k-->0){
            auto temp=pq.top();
            pq.pop();
            int freq=temp.second;
            pq.push({temp.first,freq-1});
        }
        int res=0;
        while(!pq.empty()){
            auto temp=pq.top();
            pq.pop();
            res+=pow(temp.second,2);
        }
        return res;
    }
};
