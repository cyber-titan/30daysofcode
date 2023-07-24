vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> v; 
    if(!root) return v;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            auto t = q.front(); q.pop();
            if(i == 0) v.push_back(t->data);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
    }
    
    return v;
}