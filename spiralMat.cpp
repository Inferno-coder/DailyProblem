#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    a// Write your code here.
       vector<int>ans;

    int count = 0;

    int total = n*m;

    int startRow = 0;

    int endRow = n -1;

    int startCol = 0;

    int endCol =m - 1;

 

    while(count<total){

        for(int index = startCol;count<total && index<=endCol; index++){

            ans.push_back(matrix[startRow][index]);

            count++;

        }

        startRow++;

 

        for(int index = startRow;count<total && index<=endRow; index++){

            ans.push_back(matrix[index][endCol]);

            count++;

        }

        endCol--;

 

        for(int index = endCol;count<total && index>=startCol; index--){

            ans.push_back(matrix[endRow][index]);

            count++;

        }

        endRow--;

 

        for(int index = endRow;count<total && index >= startRow; index--){

            ans.push_back(matrix[index][startCol]);

            count++;

        }

        startCol++;

    }

    return ans;
}
