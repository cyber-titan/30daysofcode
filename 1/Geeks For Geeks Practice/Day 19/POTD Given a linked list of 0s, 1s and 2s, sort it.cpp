class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int a = 0, b = 0, c = 0; Node* t = head;
        while(t){
            if(t->data == 0) a++;
            else if(t->data == 1) b++;
            else if(t->data == 2) c++;
            t = t->next;
        }
        t = head;
        while(a--){
            t->data = 0;
            t = t->next;
        }
        while(b--){
            t->data = 1;
            t = t->next;
        }
        while(c--){
            t->data = 2;
            t = t->next;
        }
        
        return head;
    }
};