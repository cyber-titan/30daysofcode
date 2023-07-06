class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *v, int n, int k)
    {
        // your code here
        vector<int> a;
        priority_queue<pair<int, int>> p;
        for(int i=0; i<k; i++){
            // O(k*log(k))
            p.push({v[i], i});
        }
        a.push_back(p.top().first);
        
        for (int i = k; i< n; i++){
            // O(n-k*log(n-k))
            p.push({v[i], i});
            
            while(p.top().second <= i-k) p.pop();
            
            a.push_back(p.top().first);
        }
        
        return a;
    }
};