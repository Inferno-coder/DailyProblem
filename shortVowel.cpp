class Solution {
public:
    string sortVowels(string s) {
      map<char,int>mp;
      map<char,int>freq;
      string vow="aeiouAEIOU";
      for(int i=0;i<s.length();i++){
          if(vow.find(s[i])!=string::npos){
            mp[s[i]]=static_cast<int>(s[i]);
            freq[s[i]]++;
          }
      } 
       map<int,char>mp2;
       for(auto it:mp)mp2[it.second]=it.first;
       //for(auto it:mp2)cout<<it.first<<" "<<it.second<<endl;
       string res="";
       for(auto it:mp2){
           char c=it.second;
           for(int i=0;i<freq[c];i++)res+=c;
       }
       //cout<<res;
       int ind=0;
       string ans="";
       for(int i=0;i<s.length();i++){
           if(res.find(s[i])!=string::npos){
            ans+=res[ind++];
           }else{
            ans+=s[i];
           }
       }
       return ans;
    }
};
