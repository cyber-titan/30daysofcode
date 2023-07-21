class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(!head) return NULL;
        struct node *prev = NULL, *cur = head, *next = NULL;
        int c = 0;
        while(cur and c < k){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next; c++;
        }
        
        if(next) head->next = reverse(next, k);
        return prev;
    }
};