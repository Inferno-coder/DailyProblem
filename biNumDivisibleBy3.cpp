class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int even=0;
	    int odd=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='1'){
	            if(i%2)odd++;
	            else even++;
	        }
	    }
	    return abs(odd-even)%3==0;
	}

};
