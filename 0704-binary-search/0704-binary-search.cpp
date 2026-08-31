class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int mid=end+(start-end)/2;

        while(start<=end){
            mid=end+(start-end)/2;
            if(arr[mid]==target){
                return mid;
            }

            else if(arr[mid] > target){
                end=mid-1;
            }
            else {
                start =mid+1;
            }
        }
        
        return -1;
    }
};