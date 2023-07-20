Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1) return head->next;
    int c = 1; Node* next= NULL, *cur = head, *prev = NULL;
    while(cur){
        next = cur->next;
        if(c == x){
            prev->next = next; return head;
        }
        prev = cur;
        cur = next;
        c++;
    }
    return head;
}