class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans; queue<int>q;
        
        int vis[V]={0}; vis[0]=1;
        q.push(0);
        
        while(!q.empty())
        {
            
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto x:adj[node])
            {
                if(vis[x]!=1){
                    vis[x]=1; q.push(x);
                }
            }
        }
        return ans;
    }
};