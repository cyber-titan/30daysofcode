class Solution{
    public:
    //Complete this function
    void printNos(int n)
    {
        //Your code here
        int i = 1;
        top:
        if(i <= n){
            cout << i << " "; i++;
            goto top;
        }
        
    }
    
    // void solve()
};

// OR 

class Solution{
    public:
    //Complete this function
    void printNos(int n)
    {
        //Your code here
        solve(n);
    }
    
    void solve(int n){
        if(n==0) return;
        solve(n-1);
        cout << n << ' ';
    }
};
