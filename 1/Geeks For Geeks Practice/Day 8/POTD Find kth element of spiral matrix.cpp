class Solution
{
    public:
    /*You are required to complete this method*/
    int c =0, ans=-1;
    int findK(int v[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		helper(v, 0, 0, n, m, k);
 		return ans;
    }
    
    void helper(int v[MAX][MAX], int i, int j,int n,int m,int &k){
        if(i >= n or j >= m or c >= k) return;
        for(int p = j; p < m; p++){
            c++;
            if(c==k) {
                ans = v[i][p]; return;
            }
        }
        
        for(int p = i+1; p < n; p++){
            c++;
            if(c==k) {
                ans = v[p][m - 1]; return;
            }
        }
        
        if(i != (n - 1)){
            for(int p = m - 2; p >= j; p--){
                c++;
                if(c==k) {
                    ans = v[n - 1][p]; return;
                }
            }
        }
        
        if(j != (m - 1)){
            for(int p = n - 2; p > i; p--){
                c++;
                if(c==k) {
                    ans = v[p][j]; return;
                }
            }
        }
        helper(v, i+1, j+1, n-1, m-1, k);
    }
};