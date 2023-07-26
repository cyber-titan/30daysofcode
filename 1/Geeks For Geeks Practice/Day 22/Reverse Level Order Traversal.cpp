vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<vector<int>> tree;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> level;
        for(int i = 0; i < n; i++){
            auto f = q.front(); q.pop();
            level.push_back(f->data);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        tree.push_back(level);
    }
    vector<int> ans;
    for(int i = tree.size() -1; i >= 0; i--){
        for(int j = 0; j < tree[i].size(); j++){
            ans.push_back(tree[i][j]);
        }
    }
    tree.clear();
    return ans;
}