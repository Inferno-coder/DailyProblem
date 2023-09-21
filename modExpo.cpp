  int res=1;

 

    while(n>0){

        if(n&1){

            res=(1LL*(res)*(x))%m;

        }

        x=(1LL*(x)*(x))%m;

        n=n>>1;

 

    }

    return res;
