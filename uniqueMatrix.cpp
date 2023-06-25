class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        int n=row;
        int m=col;
        set<string>s;
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<m;j++)temp+=to_string(M[i][j]);
            s.insert(temp);
           // cout<<temp<<" ";
        }
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<m;j++)temp+=to_string(M[i][j]);
             if(s.count(temp)){
                vector<int>t;
                for(int k=0;k<temp.length();k++){
                t.push_back(stoi(to_string(temp[k]-'0')));    
                }
                res.push_back(t);
                s.erase(temp);
            }
        }
        return res;
    }
};
