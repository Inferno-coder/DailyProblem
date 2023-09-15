#include<bits/stdc++.h>
int minSubarraySum(int arr[], int n, int k) 

{

   int i=0;

   int j=0;

   int sum=0;

   int ans=INT_MAX;

   while(j<n){

       sum+=arr[j];

       if((j-i+1)<k){

           j++;

       }

       else{

           ans=min(ans,sum);

           sum=sum-arr[i];

           i++;

           j++;

       }

   }

   return ans;

}

