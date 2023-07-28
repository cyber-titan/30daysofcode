int maxNodeLevel(Node *root)
{
    // Add your code here
    int mx = 0, level=0, ans=0;
    queue<Node*> q; q.push(root);
    while(!q.empty()){
        int n = q.size(); level++;
        if(mx < n){
            mx = n; ans = level;
        }
        for(int i = 0; i < n; i++){
            auto f = q.front(); q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
    }
    return ans-1;
}