class Solution {

    int first(vector<int>& arr, int l, int e,int target){
            int f=-1;
            while(l<=e){
                int mid=l+(e-l)/2;
                if(arr[mid] == target){
                    f=mid;
                    e=mid-1;
                }
                else if(arr[mid] > target){
                    e=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            return f;
    }

 int upper(vector<int>& arr, int l, int e,int target){
            int ee=-1;
            while(l<=e){
                int mid=l+(e-l)/2;
                if(arr[mid] == target){
                    ee=mid;
                    l=mid+1;
                }
                else if(arr[mid] > target){
                    e=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            return ee;
    }

public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first11=first(arr,0,arr.size()-1 ,target);
        int last11=upper(arr,0,arr.size()-1 ,target);
        if(first11 ==-1) return {-1,-1};
        return {first11,last11};

    }
};