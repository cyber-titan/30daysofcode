class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here
        queue<Node*> q; q.push(root);
        vector<int> v;
        while(!q.empty()){
            int n = q.size(), mx=-1;
            for(int i=0; i<n; i++){
                auto f=q.front(); q.pop();
                mx=max(mx, f->data);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            v.push_back(mx);
        }
        return v;
    }
};