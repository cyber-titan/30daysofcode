class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *root, int k)
    {
    	//code here
    	int ans = 0, level = 0;
    	queue<Node*> q; q.push(root);
    	while(!q.empty() and ans == 0){
    	    int n = q.size(); level++;
    	    for(int i = 0; i < n; i++){
    	        auto f = q.front(); q.pop();
    	        if(f->data == k) {
    	            ans = level; break;
    	        }
    	        if(f->left) q.push(f->left);
    	        if(f->right) q.push(f->right);
    	    }
    	}
    	return ans;
    }
};