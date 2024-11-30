 bool areAnagrams(string& a, string& b) {
        // Your code here
          if(a.length()!=b.length())return false;
        int freq[26]={0};
        for(int i=0;i<a.length();i++){
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }
        for(int i:freq)if(i!=0)return false;
        return true;
    }
