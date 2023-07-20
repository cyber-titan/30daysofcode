class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* prev = NULL, *cur = head, *next = NULL;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        // add 1
        int carry = 0;
        if(!prev->next){
            prev->data += 1;
            if(prev->data >= 10){
                carry = prev->data - 9;
                prev->data = 0;
                prev->next = new Node(carry);
                
                // reverse LL
                Node* a = NULL, *b=prev, *c=NULL;
                while(b){
                    c = b->next;
                    b->next = a;
                    a = b;
                    b = c;
                }
                return a;
            }
            return prev;
        }
        // next is our temp which will store prev node
        next = NULL;
        while(prev){
            // add only at head
            if(prev==head) prev->data = prev->data + 1;
            if(carry){
                prev->data += carry;
                carry = 0;
            }
            if(prev->data >= 10){
                carry = prev->data - 9;
                prev->data = 0;
            }
            // cout << prev->data << "\n";
            next = prev;
            prev = prev->next;
        }
        // 99, 999 cases
        if(carry){
            Node* node = new Node(carry);
            next->next = node;
        }
        
        // reverse LL
        cur = head; prev = NULL, next = NULL;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
    }
};