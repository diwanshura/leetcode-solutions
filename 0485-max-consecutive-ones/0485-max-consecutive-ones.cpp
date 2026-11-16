class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int size = arr.size();
        int count = 0;
        int maxi = 0;

        for (int i = 0; i < size; i++) {
            if (arr[i] == 1) {
                count++;
                maxi = max(maxi, count);
            }
            else {
                count = 0;
            }
        }
        return maxi;
    }
};