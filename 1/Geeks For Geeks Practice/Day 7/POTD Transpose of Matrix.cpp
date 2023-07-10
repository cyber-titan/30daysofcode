class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& v, int n)
    { 
        // code here 
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(i != j){
                    swap(v[i][j], v[j][i]);
                }
            }
        }
    }
};