class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        Node* ans = new Node(-1); Node* temp = root;
        while(temp){
            if(x->data < temp->data){
                ans = temp;
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        if(ans->data == -1) return NULL;
        return ans;
    }
};