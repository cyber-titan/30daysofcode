class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(!head->next) return head;
        if(!head->next->next) {
            int temp = head->next->data;
            head->next->data = head->data;
            head->data = temp;
            return head;
        }
        Node *prev=NULL, *cur = head, *next=NULL;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
};