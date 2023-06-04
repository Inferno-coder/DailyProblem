string reverseEqn (string s)
        {   
            string temp;
           int i=s.size()-1;
           while(i>=0){
               if(isdigit(s[i]) && isdigit(s[i-1])){
                   temp+=s[i-1];
                   temp+=s[i];
                   i-=2;
               }
               else{
                   temp+=s[i];
                   i--;
               }
           }
           return temp;
        }
