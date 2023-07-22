class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        unordered_set<int> s; Node* prev, *cur=head;
        while(cur){
            if(s.find(cur->data) != s.end()){
                // what if cur->next is NULL
                // 5 2 2
                cur = cur->next; prev->next = cur;
            }
            else{
                s.insert(cur->data);
                prev = cur; cur = cur->next;
            }
        }
        return head;
    }
};