class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        int top=0;
        int right=col-1;
        int bottom=row-1;
        int left=0;


      vector<int>ans;

      while(top<=bottom && left<=right){

         for(int i=left; i<=right; i++){
            ans.push_back(arr[top][i]);
         }
         top++;

         for(int i=top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
         }
         right--;

         if(top<=bottom){
            for(int i=right; i>=left; i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;

         }

         if(right >= left){
            for(int i=bottom ; i>=top ; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
         }
      } 
      return ans;       
    }
};