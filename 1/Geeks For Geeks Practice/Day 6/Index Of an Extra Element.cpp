class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int i = 0, j = 0;
        while(j < n-1){
            if(a[i] != b[j]){
                return i;
            }
            i++; j++;
        }
        if(a[i] != b[j-1]) return i;
        return 0;
    }
};