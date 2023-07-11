class Solution{
public:
	int rowWithMax1s(vector<vector<int> > v, int n, int m) {
	    // code here
	    /*
	    ind= -1
	    mx = INT_MIN
	    temp= 0
	    */
	    int ind=-1, mx = INT_MIN;
	    for(int i = 0; i < n; i++){
	        int temp = 0;
	        for(int j = m - 1; j >= 0; j--){
	            if(v[i][j]){
	                temp++;
	            }
	            else break;
	        }
	        if(mx < temp and temp != 0){
	            mx = temp; ind = i;
	        }
	    }
	    return ind;
	}

};