  bool backspaceCompare(string s, string t) {
        int back=0;
        string s1="";
        for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='#')back++;
        else if(s[i]!='#'){
            if(back==0)s1+=s[i];
            else back-=1;
        }
        }
        string s2="";
        back=0;
        for(int i=t.length()-1;i>=0;i--){
        if(t[i]=='#')back++;
        else if(t[i]!='#'){
            if(back==0)s2+=t[i];
            else back-=1;
        }
        }
        return s1==s2;
    }
