 void update(int a[], int n, int u[], int k)
    {
        // Your code goes here
        for(int i=0;i<k;i++){
            int temp=u[i];
            for(int j=temp-1;j<n;j++){
                a[j]++;
            }
        }
    }
