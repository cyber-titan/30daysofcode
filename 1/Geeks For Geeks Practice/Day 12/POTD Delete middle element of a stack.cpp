class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {
        // code here.. 
        int ind = ceil((n+1)/2) - 1;
        if(!(n&1)) ind++;
        // if(!(n&1)) ind = n - ind + 1;
        deque<int> d; int i;
        /*
        ind=2
        i=2
        d= 30 40
        s=10 20
        
        */
        for(i = 0; i < ind; i++){
            d.push_front(s.top()); s.pop();
        }
        if(i == ind){
            s.pop();
        }
        while(!d.empty()){
            s.push(d.front()); d.pop_front();
        }
    }
};