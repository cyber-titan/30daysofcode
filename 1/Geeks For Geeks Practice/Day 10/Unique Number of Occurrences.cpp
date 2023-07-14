class Solution
{
    public:
    bool isFrequencyUnique(int n, int v[])
    {
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++){
            m[v[i]]++;
        }
        unordered_set<int> s;
        vector<int> f;
        for(auto i: m){
           f.push_back(i.second); 
           s.insert(i.second);
        }
        if(f.size() == s.size()) return true;
        return false;
    }
};