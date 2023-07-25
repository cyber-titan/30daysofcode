vector<int> findSpiral(Node *root)
{
    //Your code here
    queue<Node*> q; q.push(root);
    vector<int> ans; int l = 0;
    while(!q.empty()){
        int n = q.size(); l++;
        vector<int> level;
        while(n--){
            auto t = q.front(); q.pop();
            level.push_back(t->data);    
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        if(l & 1){
            reverse(level.begin(), level.end());    
        }
        for(auto i: level) ans.push_back(i);
    }
    return ans;
}