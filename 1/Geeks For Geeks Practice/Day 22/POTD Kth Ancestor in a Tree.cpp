int helper(Node* root, int &k, int &node, int &ans){
    if(!root) return 0;
    if(root->data == node) return 1;
    
    if(helper(root->left, k, node, ans) or helper(root->right, k, node, ans)){
        k--;
        if(k == 0) ans = root->data;
        return 1;
    }
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int ans = -1;
    helper(root, k, node, ans);
    return ans;
}