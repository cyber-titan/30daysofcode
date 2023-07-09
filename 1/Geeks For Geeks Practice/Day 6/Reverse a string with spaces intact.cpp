class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
            int i = 0, j = s.size()-1;
            while(i < j){
                if(s[i]==' ') {
                    i++; continue;
                }
                else if(s[j]==' ') {
                    j--; continue;
                }
                swap(s[i], s[j]);
                i++; j--;
            }
            return s;
        }
      

};