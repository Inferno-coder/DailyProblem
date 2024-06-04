class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int res=0;
        for(auto ch:s){
             if(mp[ch]==1){
                res+=2;
                mp[ch]--;
                if(mp[ch]==0)mp.erase(ch);
             }
             else mp[ch]++;
        }
        if(mp.size()!=0)res++;
        return res;
    }
};
