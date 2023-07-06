class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &v) {
        // code here
        int a = 0;
        for(int i= 0; i < n-1; i++){
            if(v[i] < v[i+1]){
                a += (v[i+1]-v[i]);
            }
        }
        
        return a;
    }
};