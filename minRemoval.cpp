int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int cur_i=intervals[0][0];
        int cur_j=intervals[0][1];
        int start=1,res=0,n=intervals.size();
        while(start<n){
         if(cur_j>intervals[start][0])res++;
         else cur_j=max(cur_j,intervals[start][1]);
         start++;
        }
        return res;

    }
