#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int>ans;
    bool flag=true;
    for (int i = 0; i < mCols; i++) {
    vector<int>temp;
    for (int j = 0; j < nRows; j++) {
    temp.push_back(arr[j][i]);
    }
    if (flag == true) {
    for (int a = 0; a < temp.size(); a++) {
    ans.push_back(temp[a]);
    }
    flag=!flag;
    } else {
    for (int a = temp.size()-1; a>=0; a--) {
    ans.push_back(temp[a]);
        }
        flag=!flag;
    }
    }
    return ans;
}
