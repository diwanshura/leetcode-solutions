class Solution {
public:
    int search(vector<int>& arr, int target) {

        int l = 0;
        int e = arr.size() - 1;

        while (l <= e) {

            int mid = l + (e - l) / 2;

            if (arr[mid] == target)
                return mid;

            // LEFT HALF SORTED
            if (arr[l] <= arr[mid]) {

                if (target >= arr[l] && target < arr[mid]) {
                    e = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            // RIGHT HALF SORTED
            else {

                if (target > arr[mid] && target <= arr[e]) {
                    l = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
        }

        return -1;
    }
};