#include<bits/stdc++.h>
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int, int> count;
    int maxFrequency = 0;
    int maxAnswer = 0;
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        maxFrequency = max(maxFrequency, count[arr[i]]);
    }
    for(int i = 0; i < n; i++)
    {
        if(maxFrequency == count[arr[i]])
        {
            maxAnswer = arr[i];
            break;
        }
    }
    return maxAnswer;
}
