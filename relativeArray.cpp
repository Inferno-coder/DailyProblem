class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        vector<int>res;
        for(int i=0;i<arr2.size();i++){
            int temp=arr2[i];
            while(mp[temp]-->0){
                res.push_back(temp);
            }
            mp.erase(temp);
        }  
        for(auto it:mp){
            int temp=it.first;
            while(mp[temp]-->0){
            res.push_back(temp);
            }
        }
        return res;
    }
};
