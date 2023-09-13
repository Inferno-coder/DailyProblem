#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    return *max_element(arr.begin(),arr.end());
}
