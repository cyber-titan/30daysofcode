class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        // Add your code here
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            auto f = q.front(); q.pop();
            int sum = 0;
            if(f->left) {
                q.push(f->left);
                sum += f->left->data;
            }
            if(f->right) {
                q.push(f->right);
                sum += f->right->data;
            }
            if(sum != f->data and sum != 0) return 0;
        }
        return 1;
    }
};