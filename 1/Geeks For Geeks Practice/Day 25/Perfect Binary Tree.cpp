class Solution
{
public:
    bool isPerfect(Node *root)
    {
        //code here
        queue<Node*> q; q.push(root);
        int level = 0, nodes = 0;
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop(); nodes++;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            level++;
        }
        // return (pow(2, level) - 1 == nodes);
        return ((1 << level) - 1 == nodes);
    }
};