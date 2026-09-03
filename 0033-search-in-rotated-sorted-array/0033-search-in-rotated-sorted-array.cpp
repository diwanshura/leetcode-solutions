class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                return mid;
            }

            // Left half is sorted
            if (arr[s] <= arr[mid]) {

                if (arr[s] <= target && target < arr[mid]) {
                    e = mid - 1;
                }
                else {
                    s = mid + 1;
                }
            }

            // Right half is sorted
            else {

                if (arr[mid] < target && target <= arr[e]) {
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