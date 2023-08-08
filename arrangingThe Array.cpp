class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            vector<int>temp;
            for(int i=0;i<n;i++){
                
                if(arr[i]>=0)temp.push_back(arr[i]);
            }
            int a=0;
            for(int i=0;i<n;i++){
                if(arr[i]<0)arr[a++]=arr[i];
            }
            for(int i=0;i<temp.size();i++){
                arr[a++]=temp[i];
            }
        }
};
