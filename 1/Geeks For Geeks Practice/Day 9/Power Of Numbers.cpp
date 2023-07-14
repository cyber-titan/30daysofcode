class Solution{
    public:
    //You need to complete this fucntion
    long long mod = 1e9+7;
    long long power(int n,int r)
    {
       //Your code here
        if(r == 0) return 1;
        if(r == 1) return n;
        long long half = power(n, r/2);
        half = ((half%mod) * (half%mod))%mod;
        if(r & 1) return (n * half)%mod;
        return half;
    }

};