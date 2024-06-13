int padovanSequence(int n)
    {
       //code here
           if(n<=2)
       {
           return 1;
       }
       int a=1,b=1,c=1;
       
       for(int i=3;i<=n;i++)
       {
           int temp=(a+b)%1000000007;
           a=b;
           b=c;
           c=temp;
       }
       
       return c;
    }
