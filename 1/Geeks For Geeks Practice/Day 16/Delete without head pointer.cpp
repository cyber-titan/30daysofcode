class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        // Your code here
        // if(del->next){
        // }
        Node* next = del->next;
        del->data = next->data;
        del->next = next->next;
        delete next;
        
    }

};