class Solution {
public:
   
vector<int>Nearest_Smallest_left(vector<int>v){
    stack<int>st;
    int n = v.size();
    vector<int>left_min(n);
    left_min[0] = -1;
    st.push(0);
    for(int i=1; i<n; i++){
        while(st.size() && v[st.top()] >= v[i]) st.pop();
        if(st.empty()) left_min[i] = -1;
        else left_min[i] = st.top();
        st.push(i);
    }
    return left_min;
}


  
vector<int>Nearest_Smallest_right(vector<int>v){
    stack<int>st;
    int n = v.size();
    vector<int>right_min(n);
    right_min[n-1] = n;
    st.push(n-1);
    for(int i=n-2; i>=0; i--){
        while(st.size() && v[st.top()] >= v[i]) st.pop();
        if(st.empty()) right_min[i] = n;
        else right_min[i] = st.top();
        st.push(i);
    }
    return right_min;
}
int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        vector<int>left_smallest = Nearest_Smallest_left(nums);
        vector<int>right_smallest = Nearest_Smallest_right(nums);
 
        for(int i = 0; i < n; i++){
            int left = left_smallest[i] , right = right_smallest[i];
            if(k > left && k <right){
                ans = max(ans, nums[i] * (right - left - 1));  // upto what num[i] is minimum 
            }
        }
        return ans;
    }
};
