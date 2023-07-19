class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           int m=0; Node* t=head;
           while(t){
               m++; t = t->next;
           }
           
           n = m-n+1; t=head;
           if(n <= 0) return -1;
           while(n!=1){
            //   if(n==1) break;
               t=t->next; n--;
           }
            return t->data;
    }
};