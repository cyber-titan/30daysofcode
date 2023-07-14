class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node*node = new Node(x);
       if(!head) return node;
       node->next = head;
       return node;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node*node = new Node(x);
       if(!head) return node;
       Node *h=head;
       while(h->next != NULL){
           h=h->next;
       }
       h->next = node;
       return head;
    }
};