class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        queue<Node*> q; q.push(root);
        int ans = 0;
        while(!q.empty()){
            int n = q.size(), sum = 0;
            for(int i = 0; i < n; i++){
                auto f = q.front(); q.pop();
                sum += f->data;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            // cout << "Sum: " << sum << " and ans: " << ans << '\n';
            if(ans == 0) ans = sum;
            ans = max(ans, sum);
            // cout << "Sum: " << sum << " and ans: " << ans << '\n';
        }
        return ans;
    }
};