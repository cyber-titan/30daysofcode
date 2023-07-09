class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int v[], int n){
        
        // Your code here
        long long mx = INT_MIN, s = 0;
        int j = 0;
        while(j < n){
            s += v[j];
            if(mx < s) mx = max(mx, s);
            if(s < 0) s = 0;
            j++;
        }
        return mx;
    }
};