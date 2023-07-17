int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int c = 0;
     Node* t = head;
     while(t){
         c++;
         t = t->next;
     }
     return (c&1) ? 1 : 0;
}