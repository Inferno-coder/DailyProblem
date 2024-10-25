 vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int l=0,h=n-1;
        vector<int>res;
        sort(arr.rbegin(),arr.rend());
        while(l<=h){
            if(l==h){
                res.push_back(arr[l]);
                break;
            }
            res.push_back(arr[l]);
            res.push_back(arr[h]);
            h--;l++;
        }
        return res;
    }
