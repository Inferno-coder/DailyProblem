unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int res=0;
        while(n>0){
            res++;
            if(n&1==1)return res;
            n=n>>1;
        }
        return res;
    }
