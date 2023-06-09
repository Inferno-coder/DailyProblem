class Solution
{
	public:
	   void per(string str,string cur,vector<string>&res,vector<bool>&vis){
	       if(cur.length()==str.length()){
	           res.push_back(cur);
	       }
	       for(int i=0;i<str.length();i++){
	       if(vis[i])continue;
	       vis[i]=true;
	       cur.push_back(str[i]);
	       per(str,cur,res,vis);
	       vis[i]=false;
	       cur.pop_back();
	       }
	   }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<bool>vis(S.length(),false);
		    vector<string>res;
		    per(S,"",res,vis);
		    set<string>st(res.begin(),res.end());
		    vector<string>result(st.begin(),st.end());
		    return result;
		}
};
