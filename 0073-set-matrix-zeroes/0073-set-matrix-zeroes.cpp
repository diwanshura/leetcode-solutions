class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {

        int m = arr.size();
        int n = arr[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        // Find zeros
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(arr[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Set rows and columns to zero
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(row[i] == 1 || col[j] == 1) {
                    arr[i][j] = 0;
                }
            }
        }
    }
};