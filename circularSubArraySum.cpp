 int circularSubarraySum(vector<int> &arr) {

        // your code here
         int n = arr.size() ;
        int sum1 = 0 ;
        int ans = sum1 ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i ++){
            sum1 += arr[i] ;
            sum += arr[i] ;
            if(sum < 0) sum = 0 ;
            ans = max(ans , sum) ;
        }
        
        int maxi2 = 0 ;
        int sum2 = 0 ;
        
        for(int i = n - 1 ; i >= 0 ; i --){
            sum1 -= arr[i] ;
            sum2 += arr[i] ;
            maxi2 = max(maxi2 , sum2) ;
            ans = max(sum1 + maxi2 , ans) ;
        } 
        
        return ans ;
    }
