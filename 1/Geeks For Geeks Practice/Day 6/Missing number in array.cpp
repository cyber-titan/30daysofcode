class Solution{
  public:
    int missingNumber(vector<int>& v, int n) {
        // Your code goes here
        long long s1 = 0, s2 = (n*(n+1))/2;
        for(auto i: v) s1 += i;
        return s2 - s1;
    }
};