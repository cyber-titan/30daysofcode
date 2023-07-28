class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        queue<Node*> q; q.push(root);
        int level=0;
        while(!q.empty()){
            int n = q.size(); level++;
            for(int i = 0; i < n; i++){
                auto f= q.front(); q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return level;
    }
};