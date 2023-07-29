class Solution
{
public:
    int depthOfOddLeaf(Node *root)
    {
        //code here
        int level = 0, ans = -1;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size(); level++;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(!f->left and !f->right and (level & 1)) ans = level;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return (ans == -1) ? 0 : ans; 
    }
};