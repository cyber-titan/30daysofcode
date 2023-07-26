vector<vector<int>> levelOrder(Node* root)
{
    //Your code here
    vector<vector<int>> tree;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        int n = q.size(); vector<int> level;
        for(int i = 0; i < n; i++){
            auto f = q.front(); q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
            level.push_back(f->data);
        }
        tree.push_back(level);
    }
    return tree;
}