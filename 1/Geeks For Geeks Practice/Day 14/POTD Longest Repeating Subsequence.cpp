class Solution {
	public:
		int LongestRepeatingSubsequence(string s){
		    // Code here
		    /*
		    axxxy
		     ^ ^
		    */
		     int n=s.size(); int a[n+1][n+1];
            for(int i = 0; i <= n; i++) {
                for(int j = 0; j <= n; j++) {
                    if(i == 0 || j == 0) a[i][j] = 0; 
                    else if(s[i-1] == s[j-1] && i!=j) a[i][j] = 1 + a[i-1][j-1]; 
                    else a[i][j] = max(a[i-1][j], a[i][j-1]); 
                }
            }
            return a[n][n];
		}

};