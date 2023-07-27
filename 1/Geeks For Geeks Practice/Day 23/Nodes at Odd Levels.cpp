class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        //code here
        vector<Node*> ans;
        queue<Node*> q; q.push(root); int level = 0;
        while(!q.empty()){
            int n = q.size(); level++;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop(); 
                if(level & 1) ans.push_back(f);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return ans;
    }
};