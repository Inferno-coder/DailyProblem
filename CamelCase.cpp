    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> up;
        
        for(auto x: Dictionary){
            string st;
            
            st.clear();
            for(auto s: x){
                
                //checking if it is upper
                if(isupper(s))
                    
                       st+=s; 
                
            }
            if(Pattern==string(st.begin() + 0, st.begin() + Pattern.length()))
                up.push_back(x);
        }
        
        if(up.size() ==0)
            return {"-1"};
        
        return up;
    }
