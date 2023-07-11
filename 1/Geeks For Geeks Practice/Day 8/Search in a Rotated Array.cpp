class Solution{
    public:
    int search(int v[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int c = -1;
        for(int i = 0; i < h-1; i++){
            if(v[i] > v[i+1]) {
                c = i; break;
            }
        }
        int ans = binSearch(v, l, c, key);
        if(ans != -1) return ans;
        ans = binSearch(v, c+1, h, key);
        return ans;
    }
    
    int binSearch(int v[], int l, int h, int k){
        while(l <= h){
            int m = h + (l - h)/2;
            if(v[m] == k) return m;
            else if(v[m] < k) l = m+1;
            else h = m-1;
        }
        return -1;
    }
};