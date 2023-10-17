#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	str[0]=toupper(str[0]);
	for(int i=1;i<str.length();i++){
    if(str[i-1]==' '){
		str[i]=toupper(str[i]);
	}
	}
	
	return str;
}
