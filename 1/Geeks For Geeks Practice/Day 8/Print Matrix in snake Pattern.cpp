class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > v)
    {   
        // code here
        vector<int> a;
        int n = v.size();
        for(int i = 0; i < n; i++){
            int j;
            if(!(i&1)){
                for(int j = 0; j < n; j++){
                    a.push_back(v[i][j]);
                }
            }
            else{
                for(int j = n - 1; j >= 0; j--){
                    a.push_back(v[i][j]);
                }
            }
        }
        return a;
    }
};