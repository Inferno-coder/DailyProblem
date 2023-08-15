int maxOnes(int a[], int n)
    {
        // Your code goes here
        int one=0;
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++){
        if(a[i]==1)one++;
        if(a[i]==0)count++;
        else count--;
        if(count>maxi)maxi=count;
        else if(count<0)count=0;
        }
        return maxi+one;
    }
