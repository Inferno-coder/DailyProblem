bool checkKthBit(int n, int k)
    {
        int mask=1<<k;
        return (mask&n)!=0;
    }
