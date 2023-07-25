class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        //Your code here
        vector<int> v;
        queue<Node*> q; q.push(node);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                v.push_back(f->data);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return v;
    }
};