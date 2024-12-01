 vector<int>temp;
       map<char,int>m;
       for(int i=0;i<S.length();i++){
       char ch=S[i];
       m[ch]++;
       }
       for(int i=0;i<S.length();i++){
           if(m[S[i]]==1)return S[i];
       }
       return '$';
