class Solution {
public:
    int pos(int day,int m,int k,vector<int>b){
    int count=0,ans=0;
    for(int i=0;i<b.size();i++){
    if(b[i]<=day)count++;
    else{
    ans+=(count/k);
    count=0;
    }
    }
    ans+=(count/k);
return ans>=m;
    }
    int minDays(vector<int>& b, int m, int k) {
        if(b.size() < m * 1LL *k * 1LL)return -1;
    int low=0;
    int high=*max_element(b.begin(),b.end());
    while(low<=high){
    int mid=low+(high-low)/2;
    if(pos(mid,m,k,b)==true)high=mid-1;
    else low=mid+1;
    }
    return low;
    }
};
