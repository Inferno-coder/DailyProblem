class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        set<char>st;
        int res=0;
        while(j<s.length()){
        char ch=s[j];
        while(st.count(ch)){
        st.erase(s[i]);i++;
        }
        st.insert(s[j]);
        res=max(res,j-i+1);
        j++;
        }
        return res;
    }
};
