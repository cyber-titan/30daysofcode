class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
        //Your code here
        unordered_map<char, int> m;
        for(auto ch: s){
            m[ch]++;
        }
        
        char a = '$';
        for(auto i: s){
            if(m[i] == 1){
                a = i; break;
            }
        }
       return a;
    }

};