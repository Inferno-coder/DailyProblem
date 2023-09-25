 int maxi=0;
      int hash[26]={0};
     int i=0,j=0;
     int cnt=0;
     while(j<s.size()){
         hash[s[j]-'a']++;
         if(hash[s[j]-'a']==1)cnt++;
         if(cnt<=k)maxi=max(maxi,j-i+1);
         while(cnt>k){
             hash[s[i]-'a']--;
             if(hash[s[i]-'a']==0)cnt--;
             i++;
         }
         j++;
     }
     return maxi;
