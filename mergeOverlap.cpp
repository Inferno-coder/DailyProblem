 vector<vector<int>> mergeOverlap(vector<vector<int>>& intervals) {
        // Code here
         vector<vector<int>>res;
         int n=intervals.size();
         sort(intervals.begin(),intervals.end());
         int prev0=intervals[0][0];
         int prev1=intervals[0][1];
         int i=1;
         while(i<n){
          if(intervals[i][0]>=prev0 && intervals[i][0]<=prev1){
              prev1=max(prev1,intervals[i][1]);
              i++;
          }   
          else{
              res.push_back({prev0,prev1});
              prev0=intervals[i][0];
              prev1=intervals[i][1];
              i++;
          }
         }
          res.push_back({prev0,prev1});
         return res;
    }
