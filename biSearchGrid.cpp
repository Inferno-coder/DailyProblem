 bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low=0;
        int n=mat[0].size();
        int high=mat.size()-1;
        while(low<=high){
        int mid=low+(high-low)/2;
        if(find(mat[mid].begin(),mat[mid].end(),target)!=mat[mid].end())return true;
        if(mat[mid][n-1]>target)high=mid-1;
        else low=mid+1;
        }
        return false;
    }
