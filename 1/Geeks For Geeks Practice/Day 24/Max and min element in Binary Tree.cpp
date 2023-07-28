class Solution
{
public:
    int findMax(Node *root)
    {
        //code here
        int mx = -1;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(mx < f->data){
                    mx = f->data;
                }
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return mx;
    }
    int findMin(Node *root)
    {
        //code here
        int mx = 1000000;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                if(mx > f->data){
                    mx = f->data;
                }
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return mx;
    }
};