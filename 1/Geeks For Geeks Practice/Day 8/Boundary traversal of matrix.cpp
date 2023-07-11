class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > v, int n, int m) 
    {
        // code here
        vector<int> a;
        int i = 0, j = 0;
        for(int p = 0; p < m; p++) a.push_back(v[i][p]);
        for(int p = i+1; p < n; p++) a.push_back(v[p][m-1]);
        if(i != (n-1)){
            for(int p = m-2; p >= j; p--) a.push_back(v[n-1][p]);
        }
        if(j != (m-1)){
            for(int p = n-2; p > i; p--) a.push_back(v[p][j]);
        }
        return a;
    }
};