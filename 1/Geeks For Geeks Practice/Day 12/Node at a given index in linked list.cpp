int GetNth(struct node* head, int index){
    // Code here
    if(index==1) return head->data;
    int c = 1, a;
    node* t = head;
    while(t){
        if(c==index) {
            a = t->data; break;
        }
        c++;
        t = t->next;
    }
    return a;
}