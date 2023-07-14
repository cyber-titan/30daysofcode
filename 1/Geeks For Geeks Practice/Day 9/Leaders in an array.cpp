class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int v[], int n){
        // Code here
        /*
        {16,17,4,3,5,2}
        {17 17 5 5 5 2}
        */
        if(n==1) return {v[0]};
        vector<int> a; int mx = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            if(mx <= v[i]){
                mx = v[i];
                a.push_back(mx);
            }
        }
        reverse(a.begin(), a.end());
        return a;
    }
};