class Solution{
  public:
    vector<int> duplicates(int v[], int n) {
        // code here
        vector<int> b(n, 0);
        for(int i = 0; i < n; i++){
            b[v[i]] += 1;
        }
        int i = 0;
        for(int j = 0; j < n; j++){
            if(b[j] > 1){
                b[i] = j;
                i++;
            }
        }
        if(i==0) return {-1};
        b.resize(i);
        return b;
        /*
        0 1 2 2
        0 1 2 3
        */
    }
};