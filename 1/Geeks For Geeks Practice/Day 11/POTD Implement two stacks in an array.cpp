class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
    /*
    s1=8 
    s2=4 12 
    */
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1+1>=top2) return;
        else arr[++top1]=x;
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
        if(top2-1<=top1) return;
        else arr[--top2]=x;
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1<0){
            return -1;
        }
        else{
            return arr[top1--];
        }
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2>size-1){
            return -1;
        }
        else{
            return arr[top2++];
        }
       
    }
};