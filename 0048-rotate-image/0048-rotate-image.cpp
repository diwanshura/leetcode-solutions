class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        for(int i=0; i<row ; i++){
            for(int j=i ; j<col; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }

        for(int i=0 ; i<col; i++){
            reverse(arr[i].begin(),arr[i].end());
        }

    }
};