void MyStack ::push(int x) 
{
    // Your Code
    StackNode *h = new StackNode(x);
    if(!top) top = h;
    else {
        h->next = top;
        top = h;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(!top) return -1;
    StackNode *temp = top;
    top = top->next;
    int x = temp->data;
    free(temp);
    return x;
}