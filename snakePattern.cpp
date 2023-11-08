vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>res;
        int f=0;
        for(int i=0;i<matrix.size();i++){
            vector<int>temp;
            for(int j=0;j<matrix[0].size();j++){
                temp.push_back(matrix[i][j]);
            }
            if(f==0){
                for(int k=0;k<temp.size();k++)res.push_back(temp[k]);
            }else{
                reverse(temp.begin(),temp.end());
                 for(int k=0;k<temp.size();k++)res.push_back(temp[k]);
            }
            f=!f;
        }
        return res;
    }
