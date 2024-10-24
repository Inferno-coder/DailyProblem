 vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n=arr.size();
        vector<int>temp=arr;
        for(int i=0;i<n-1;i++){
            if(temp[i]==temp[i+1]){
                temp[i]=temp[i]+temp[i+1];
                temp[i+1]=0;
            }
        }
        int id=0;
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            if(temp[i]!=0)res[id++]=temp[i];
        }
        return res;
    }
