int fractional_node(struct Node *head, int k)
{
    // your code here
    int n = 0; Node* t = head;
    while(t){
        n++; t = t->next;
    }
    
    n = (n % k) == 0 ? (n/k) : (n/k)+1;
    int c = 1; t= head;
    while(c != n and t){
        t = t->next; c++;
    }
    return t->data;
}