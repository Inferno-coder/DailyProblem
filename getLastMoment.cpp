class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        if(left.size()==0 && right.size()==0)return 0;
       if(right.size()==0)return left[left.size()-1];
       if(left.size()==0)return n-right[0];
       return max(n-right[0],left[left.size()-1]); 
    }
};
