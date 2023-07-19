Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node *prev=head, *cur=head->next;
    if(!prev->next) return prev;
    while(prev and cur){
        if(prev->data == cur->data){
            prev->next = cur->next;
            cur = cur->next;
        }
        else{
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}