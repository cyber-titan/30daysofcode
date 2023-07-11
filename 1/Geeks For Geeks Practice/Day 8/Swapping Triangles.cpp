class Solution {
  public:
    vector<vector<int>> swapTriangle(int n, vector<vector<int>> v) {
        // code here
        /*
        1   2   3
        4   5   6
        7   8   9
        */
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                swap(v[i][j], v[j][i]);
            }
        }
        return v;
    }
};