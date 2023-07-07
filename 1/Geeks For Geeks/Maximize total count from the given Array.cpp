#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int main()
{
    vi v = {1, 2, 3, 0, 4, 5, 0};
    priority_queue<int> p;
    int ans = 0;
    for(auto i: v){
        if(i!=0){
            p.push(i);
        }
        else{
            ans += p.top();
            p.pop();
        }
    }
    cout << ans;
    return 0;
}