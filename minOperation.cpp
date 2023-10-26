int minOperation(int n)
    {
        //code here.
             int c = 0;
        while(n>0){
            if(n%2==0){
                n = n/2;
            }
            else{
                n--;
            }
            c++;
        }
        return c;
    }
