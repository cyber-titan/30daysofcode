class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		  //  if(a.size()==1) return a;
		  //  string s = "" + a[0];
		    /*
		    i=0
		    cur=1
		    s=a
		    */
		    string s(A.length(),'#');
            map<char, int> m;
            queue<char> q;
            for(int i = 0; i < A.length(); i++)
            {
                // insert each char
                m[A[i]]++;
                if(m[A[i]] == 1) q.push(A[i]);
                while(!q.empty() and m[q.front()] > 1) q.pop();
                if(!q.empty()) s[i] = q.front();
            }
            return s;
		}

};