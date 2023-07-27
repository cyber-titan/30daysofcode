void reverseAlternate(Node *root)
{
    //Your code here
    queue<Node*> q; q.push(root);
    vector<vector<int>> v;
    while(!q.empty()){
        int n = q.size(); vector<int> t;
        for(int i = 0; i < n; i++){
            auto f = q.front(); q.pop();
            t.push_back(f->data);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        v.push_back(t);
    }
    
    int level = 0; q.push(root);
    while(!q.empty()){
        int n = q.size(), ind = 0; level++; // vector<int> t(v[level]);
        if(!(level & 1)) ind = v[level - 1].size() - 1;
        for(int i = 0; i < n; i++){
            auto f = q.front(); q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
            if(!(level & 1)){
                f->data = v[level - 1][ind]; ind--;
            }
            else{
                f->data = v[level - 1][ind]; ind++;
            }
        }
    }
}