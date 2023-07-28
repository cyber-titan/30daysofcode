class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        vector<pair<int, int>> v; int level=0;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size(); level++;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
                if(!f->left and !f->right) v.push_back({f->data, level});
            }
        }
        
        bool ans = true;
        for(int i = 0; i < v.size()-1; i++){
            if(v[i].second != v[i+1].second){
                ans = false; break;
            }
        }
        return ans;
    }
};