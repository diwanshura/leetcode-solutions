class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // If slope is rising, peak is to the right
                s = mid + 1;
            } else {
                // If slope is falling or at peak, move left
                e = mid;
            }
        }

        return s; // or return e (both are same here)
    }
};
