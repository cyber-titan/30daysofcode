class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* s = head, *f=head;
        while(f and f->next){
            s = s->next;
            f = f->next->next;
        }
        return s->data;
    }
};