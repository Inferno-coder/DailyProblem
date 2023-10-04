long long titleToNumber(string str) {
    // Write your code here
     long long ans=0;

    int n=str.size();

    for(int i=0;i<n;i++)

    {

        int a=str[i]-'A';

        ans=ans*26 + a+1;

    }

    return ans;
}
