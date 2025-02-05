class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s = 0, e = arr.size()-1;
        int ans = -1;
        while(s <= e) {
            int mid = s + (e-s) / 2;
            if(arr[mid] == target) {
                return mid;
            }
            if(arr[s] <= arr[mid]) {
                if(arr[s] <= target && target < arr[mid]) {
                    e = mid - 1;
                }
                else {
                    s = mid + 1;
                }
            }
            else {
                if(target > arr[mid] && arr[e] >= target) {
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }

            }
        }
        return -1;
    }
};
