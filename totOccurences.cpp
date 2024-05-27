 int lower_bound(int l,int h,int arr[],int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>=target){
                h=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
    
    int upper_bound(int l,int h,int arr[],int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>target){
                h=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
    
	int count(int arr[], int n, int x) {
	    // code here
	   int firstInd=lower_bound(0,n-1,arr,x);
	   int lastInd=upper_bound(0,n-1,arr,x)-1;
	   if(firstInd>=n || lastInd>=n || arr[firstInd]!=x || arr[lastInd]!=x)return 0;
	   return lastInd-firstInd+1;
	}
