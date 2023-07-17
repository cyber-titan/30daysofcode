class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        /*
        s=4 3 1 10 2 6
        */
        stack<int> s;
        while(!q.empty()){
            s.push(q.front()); q.pop();
        }
        while(!s.empty()){
            q.push(s.top()); s.pop();
        }
        return q;
    }
};