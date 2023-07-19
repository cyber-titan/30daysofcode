class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* a=head, *b = head;
        /*
        1 2 3 4
        a   
        b
        */
        while(a and b and b->next){
            a = a->next; b=b->next->next;
            if(a==b) return true;
        }
        return false;
    }
};