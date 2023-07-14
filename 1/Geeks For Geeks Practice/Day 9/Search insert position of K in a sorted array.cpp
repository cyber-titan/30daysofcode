class Solution{
    public:
    int searchInsertK(vector<int>v, int n, int k)
    {
        // code here
        return bin(v, n, k);
    }
    
    int bin(vector<int> &v, int &n, int &k){
        int l = 0, h = n-1;
        while(l <= h){
            int m = h + (l - h)/2;
            if(v[m] == k) return m;
            else if(v[m] < k) l = m+1;
            else h = m-1;
        }
        return l;
    }
    
};