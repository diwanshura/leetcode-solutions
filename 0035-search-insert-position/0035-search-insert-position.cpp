class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int ans=arr.size();
        int l=0;
        int e=arr.size()-1;
        while(l<=e){
            int mid=l+(e-l)/2;
            if(arr[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};