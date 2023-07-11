class Solution {
  public:
    vector<int> ans;
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&a)  {
        // code here
        helper(a, 0, 0, r, c);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void helper(vector<vector<int>>&v, int i, int j, int n, int m){
        if(i >= n or j >= m) return;
        for(int p = j; p < m; p++){
            ans.push_back(v[i][p]);
        }
        
        for(int p = i+1; p < n; p++){
            ans.push_back(v[p][m-1]);
        }
        
        if(i != (n-1)){
            for(int p = m-2; p >= j; p--){
                ans.push_back(v[n-1][p]);
            }
        }
        
        if(j != (m-1)){
            for(int p = n-2; p > i; p--){
                ans.push_back(v[p][j]);
            }
        }
        
        helper(v, i+1, j+1, n-1, m-1);
    }
};