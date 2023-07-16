bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    if(!head1 or !head2) return false;
    Node *a = head1, *b = head2;
    bool ans = true;
    while(a and b){
        if(a->data != b->data) return false;
        a = a->next;
        b = b->next;
    }
    if(!a and b or a and !b) return false; 
    return ans;
}