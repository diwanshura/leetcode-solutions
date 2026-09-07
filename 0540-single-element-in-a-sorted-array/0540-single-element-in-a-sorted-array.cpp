class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

          
            if (mid % 2 == 1)
                mid--;

            if (arr[mid] == arr[mid + 1]) {
               
                s = mid + 2;
            } 
            else {
                
                e = mid;
            }
        }

        return arr[s];
    }
};