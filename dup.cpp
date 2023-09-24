class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
       vector<int> v1;
          vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
        
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>1)
            {
               v1.push_back(i);
                flag=1;
            }
        }
        
        if(flag==1)
        {
            return v1;
        }
        else
        {
            v1.clear();
            v1.push_back(-1);
            return v1;
        }
    }
};
