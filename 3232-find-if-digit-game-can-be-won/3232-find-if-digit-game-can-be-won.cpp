class Solution {
public:
    bool canAliceWin(vector<int>& arr) {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= 9) {
                sum1 += arr[i];
            } else {
                sum2 += arr[i];
            }
        }

        return sum1 != sum2;
    }
};