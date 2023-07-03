void tSum(vector<int>& a, int x, vector<int>& arr){
    int i = 0, j = a.size()-1;
    while (i < j){
        if (a[i] + a[j] > x){
            j--;
        }
        else if (a[i] + a[j] < x){
            i++;
        }
        else {
            arr[0] = a[i];
            arr[1] = a[j];
            break;
        }
    }
}
// 2, 3, 4
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> b = nums; // b is original nums array
        sort(nums.begin(), nums.end());
        vector<int> arr(2);
        tSum(nums, target, arr);
        int c = 0;
        for (int i = 0; i < b.size(); i++){
            if (c == 2) break;
            if (b[i] == arr[0]){
                arr[0] = i;
                c++;
                continue;
            }
            if (b[i] == arr[1]){
                arr[1] = i;
                c++;
                continue;
            }
        }
        return arr;
    }
};