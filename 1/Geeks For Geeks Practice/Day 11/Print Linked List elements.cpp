class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
        // Node* h=head
        while(head){
            cout << head->data << " ";
            head = head->next;
        }
    }
};