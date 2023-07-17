class Solution {
	public:
		string FirstNonRepeating(string A){
		     string ans = string(1,A[0]);

      vector<int> temp(26,0);

      temp[A[0]-'a']++;

      int i=0,j=1,n=A.size();

      while(j<n){

          temp[A[j]-'a']++;

          j++;

          while(temp[A[i]-'a']!=1 && i<j){

              i++;

          }

          if(i==j)ans+="#";

          else ans+=A[i];

      }

      return ans;
		}

};
