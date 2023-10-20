class Solution {
  public:
   int sod(int num){
       int sum=0;
       while(num>0){
           sum+=num%10;
           num/=10;
       }
       return sum;
   }
    int isPossible(int N, int arr[]) {
        // code here
        int res=0;
    for(int i=0;i<N;i++){
        res+=sod(arr[i]);
    }
   // cout<<res<<" ";
    return res%3==0;
    }
};
