class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        // if(head->next == NULL) return 1;
        int c = 0;
        Node* h = head;
        while(h->next != NULL){
            h = h->next; c++;
        }
        return c+1;
    }
};