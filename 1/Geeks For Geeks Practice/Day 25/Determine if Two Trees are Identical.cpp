class Solution
{
    public:
    //Function to check if two trees are identical.
    bool helper(Node* r1, Node* r2){
        if(!r1 or !r2) return r1 == r2;
        return r1->data == r2->data and helper(r1->left, r2->left) and helper(r1->right, r2->right);
    }
    
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        return helper(r1, r2);
    }
};