bool isCircular(Node *head)
{
   // Your code here
   Node *c = head;
   while(c->next != NULL){
        if(c->next == head) return true;
        c = c->next;
   }
   return false;
   /*
   s=5
   f=5
   */
}