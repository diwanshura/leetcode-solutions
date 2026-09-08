class Solution {

    int maxFunction(vector<int>& arr) {
        int maxi = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }

        return maxi;
    }

    long long totalHrs(vector<int>& arr, int k) {
        long long total = 0;

        for (int i = 0; i < arr.size(); i++) {
           total +=(arr[i] + k - 1) / k;
        }

        return total;
    }

public:
    int minEatingSpeed(vector<int>& arr, int h) {

        int s=1;
       int e=maxFunction(arr);

        while(s<=e){
            int mid=s+(e-s)/2;
            long long hour=totalHrs(arr,mid);
            if(  hour<= h){
               
                e=mid-1;

            }
            else{
                s=mid+1;
            }
        }

      return s;
    }
};