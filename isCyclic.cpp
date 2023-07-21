class Solution {
  public:
  bool dfs(int i,vector<int> adj[],vector<int>&vis,vector<int>&path){
  vis[i]=1;
  path[i]=1;
  for(auto it:adj[i]){
      if(!vis[it]){
      if(dfs(it,adj,vis,path)==true)return true;
      }
      else if(path[it])return true;
  }
  path[i]=0;
  return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>path(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                vector<int>path(V,0);
                if(dfs(i,adj,vis,path)==true)return true;
            }       
        }
        return false;
    }
};
