int modularNode(Node* head, int k)
{
	// Code here
	int ind=0, i = 1, ans = -1; Node* t=head;
	while(t){
	    if((i % k) == 0){
	        ind = i; ans=t->data;
	    }
	    i++; t=t->next;
	}
	
	return ans;
}