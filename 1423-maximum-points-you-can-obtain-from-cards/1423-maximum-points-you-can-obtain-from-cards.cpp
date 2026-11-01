class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0;
        int rsum=0;
        int maxsum=0;
        int size=arr.size();

        for(int i=0 ; i<k ; i++){
            lsum+=arr[i];
            maxsum=lsum;
        }
        for(int i=k-1 ; i>=0 ; i--){
            lsum-=arr[i];
            rsum+=arr[size-1];
            size--;

            maxsum=max(maxsum,(lsum+rsum));
        }
        return maxsum;
    }
};