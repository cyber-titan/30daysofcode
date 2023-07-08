class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int v[], int n)
    { 
        //Your code here
        sort(v, v+n);
        /*
        -3 -1 0 1 2
        i   j     k
        */
        for(int i = 0; i < n - 2; i++){
            int j = i+1, k = n - 1;
            while(j < k){
                if(v[i]+v[j]+v[k] == 0){
                    return 1;
                }
                if(v[i]+v[j]+v[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return 0;
    }
};