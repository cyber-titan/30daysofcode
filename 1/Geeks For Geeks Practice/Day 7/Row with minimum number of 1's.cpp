class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> v) {
        // code here
        int mn = INT_MAX, ind = 0;
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = 0; j < m; j++){
                if(v[i][j]) temp++; 
            }
            if(mn > temp){
                mn = temp;
                ind = i;
            }
        }
        return ind+1;
    }
};