class Solution
{
public:
    int minLeafSum(Node *root)
    {
        //code here
        queue<Node*> q; q.push(root);
        int ans = -1;
        while(!q.empty()){
            int n = q.size(), t = 0;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
                if(!f->left and !f->right) t += f->data;
            }
            if(ans == -1 and t != 0){
                ans = t; break;
            }
        }
        // q.clear();
        return ans;
    }
};