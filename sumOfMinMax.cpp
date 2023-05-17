#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maxi=INT_MIN,mini=INT_MAX;
        for (int i = 0; i < n; i++) {
        mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
		}
		return mini+maxi;
}
