class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        int ans = 0,mx = 0;
        int st = 0,e = 0;
        while(e < s.length()){
            m[s[e]]++;
            if(m[s[e]] > 1){
                char ch = s[e];
                while(m[ch] > 1){
                    m[s[st]]--;
                    if(m[s[st]] == 0) m.erase(s[st]);
                    st++;
                }
            }
            // cout<<e<<' '<<st<<'\n';
            ans = e-st+1;
            mx = max(ans,mx);
            e++;

        }

        return mx;
    }
};