class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        int ans = -1;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size(); ans = max(ans, n);
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return ans;
    }
};