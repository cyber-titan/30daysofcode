Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* n = new Node(x);
	if(!head) return n;
	Node* t = head;
	int c = 0;
	while(t){
	    c++; t = t->next;
	}
	
	t=head;
	int half = c/2;
	while(t){
	    c--;
	    if(half == c){
	        n->next = t->next;
	        t->next = n; break;
	    }
	    t = t->next;
	}
	return head;
}