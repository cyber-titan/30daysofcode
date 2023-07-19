class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
        Node *prev = NULL, *cur = head;
        if(!cur->next) return head;
        unordered_set<int> s;
        while(cur){
            if(s.find(cur->data) != s.end()){
                prev->next = cur->next;
                delete cur;
            }
            else{
                s.insert(cur->data);
                prev = cur;
            }
            cur = prev->next;
        }
        return head;
    }
};