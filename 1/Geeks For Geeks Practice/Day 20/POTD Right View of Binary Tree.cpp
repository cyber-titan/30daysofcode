class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        // Your Code here
        vector<int> v;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                auto t = q.front(); q.pop();
                if(n == 0) v.push_back(t->data);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return v;
    }
};