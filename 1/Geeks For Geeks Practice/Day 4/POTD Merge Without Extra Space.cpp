class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long v1[], long long v2[], int n, int m) 
        { 
            // code here 
            int end = n - 1, start = 0;
            while(end >= 0 and start < m){
                if(v1[end] > v2[start]) swap(v1[end--], v2[start++]);
                else break;
            }
            sort(v1, v1+n);
            sort(v2, v2+m);
        } 
};