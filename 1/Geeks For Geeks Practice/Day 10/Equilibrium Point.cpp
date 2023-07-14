class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long v[], int n) {
    
        // Your code here
        /*
        i=1
        s=13
        l=v[0]; later l +=v[i] = 
        r=s-l-v[i] = 
        */
        if(n==1) return 1;
        if(n==2) return -1;
        long long s = 0, l=v[0], r;
        for(int i = 0; i < n; i++) s += v[i];
        for(int i = 1; i < n-1; i++){
            r = s - l - v[i];
            if(l == r) return i+1;
            l += v[i];
        }
        return -1;
    }

};