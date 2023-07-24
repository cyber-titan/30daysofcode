class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
        //Your code here
        int o = 0, e = 0, level = 0;
        queue<Node*> q; q.push(root);
        while(!q.empty()){
            int n = q.size(); level++;
            for(int i = 1; i <= n; i++){
                auto t = q.front(); q.pop();
                if(level & 1) o += t->data;
                else e += t->data;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return (o - e);
    }
};