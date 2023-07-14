class Solution{
public:
	void pushZerosToEnd(int v[], int n) {
	    // code here
	    /*
	    3 5 0 4 0
	    i=2
	    j=3
	    */
	    int ind = 0;
	    for(int i = 0; i < n; i++){
	        if(v[i] != 0){
	            swap(v[i], v[ind]); ind++;
	        }
	    }
	}
};