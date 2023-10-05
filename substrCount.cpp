 long long int solve(string s,int k){
        vector<int> arr(26, 0); 
        int dist = 0, left = 0;
        long long res = 0;

        for (int i = 0; i < s.length(); i++) {
            arr[s[i] - 'a']++;
            if (arr[s[i] - 'a'] == 1) dist++;

            while (dist > k) {
                arr[s[left] - 'a']--;
                if (arr[s[left] - 'a'] == 0) dist--;
                left++;
            }
            res = res + (i - left + 1);
        }
        return res;
    }
    
    long long int substrCount (string s, int k) {
    	
    	return solve(s,k)-solve(s,k-1);
    }
