class Solution {

    int maxum(vector<int> arr) {
        int maxi = INT_MIN;
        int size = arr.size();

        for (int i = 0; i < size; i++) {
            maxi = max(maxi, arr[i]);
        }

        return maxi;
    }

public:

    int findKthPositive(vector<int>& arr, int k) {

        int s = 1;
        int e = maxum(arr) + k;

        vector<int> ans = {0};

        int j = 0;

        for (int i = 1; i <= e; i++) {

            if (j < arr.size() && arr[j] == i) {
                j++;
            }
            else {
                ans.push_back(i);
            }
        }

        return ans[k];
    }
};