#include <bits/stdc++.h> 

void permutation(string str,vector<string>&s,int i)

{

    if(i == str.length())

    {

        s.push_back(str);

        return;

    }

    for(int j = i; j < str.size(); j++)

    {

        swap(str[i],str[j]);

        permutation(str,s,i + 1);

        swap(str[i],str[j]);

    }

}

vector<string> findPermutations(string &s) {

    // Write your code here.

    vector<string>str;

    permutation(s,str,0);

    return str; 

}
