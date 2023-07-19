int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
    int m=0; Node* t = head;
    while(t){
        m++; t=t->next;
    }
    
    int sum = 0, i = 1; t=head;
    while(t){
        if(i > (m-n)) sum += t->data;
        i++; t=t->next;
    }
    return sum;
    /*
    m=6
    n=3
    */
}