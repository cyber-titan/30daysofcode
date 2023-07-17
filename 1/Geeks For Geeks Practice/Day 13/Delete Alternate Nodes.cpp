void deleteAlt(struct Node *head){
    // Code here
    // if(head->next==NULL) return;
    // if(head->next->next==NULL) head->next=NULL;
    Node* t = head;
    while(t->next and t->next->next){
        // Node* a = t->next; 
        t->next = t->next->next;
        // delete a;
        t = t->next;
    }
    t->next=NULL;
}