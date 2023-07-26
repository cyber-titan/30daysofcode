class Solution{
  public:
    /* Function to print nodes of extreme corners
    of each level in alternate order */
    vector<int> ExtremeNodes(Node* root)
    {
        // Your code here
        vector<int> ans;
        queue<Node*> q; q.push(root);
        int level = 0;
        while(!q.empty()){
            int n = q.size();
            level++; vector<int> t;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(f->left) q.push(f->left);    
                if(f->right) q.push(f->right);    
                t.push_back(f->data);
            }
            ans.push_back((level & 1) ? t[t.size() - 1] : t[0]);
        }
        return ans;
    }
};