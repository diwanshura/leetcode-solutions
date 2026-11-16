class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();

        if (n == 0) return;

        k = k % n;

        std::rotate(arr.begin(), arr.end() - k, arr.end());
    }
};