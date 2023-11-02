  public:
    int minDist(int a[], int n, int x, int y)
    {
        // code here
        int prev = -1, Min = 1e6;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x || a[i] == y)
            {
                if(prev > -1 and a[prev] != a[i])
                {
                    Min = min(Min, i-prev);
                }
                prev = i;
            }
        }
        return (Min == 1e6) ? -1 : Min;
    }
};
