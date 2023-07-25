class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> v;
    	queue<Node*> q; q.push(root); int level = 0;
    	while(!q.empty()){
    	    int n = q.size(); level++;
    	    vector<int> t;
    	    for(int i = 0; i < n; i++){
    	        auto f = q.front(); q.pop();
    	        if(f->left) q.push(f->left);
    	        if(f->right) q.push(f->right);
    	        t.push_back(f->data);
    	    }
    	    if(!(level & 1)){
    	        reverse(t.begin(), t.end());
    	    }
    	    for(auto x: t) v.push_back(x);
    	}
    	return v;
    }
};