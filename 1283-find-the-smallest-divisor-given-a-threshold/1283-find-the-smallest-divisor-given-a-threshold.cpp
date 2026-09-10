class Solution {

int divisor(vector<int>arr,int x){
    int sum=0;

    for(int i=0 ; i<arr.size() ; i++){
        sum+=((arr[i]+x )-1)/x;
    }
    return sum;
}


int maximum(vector<int>arr){
    int maxi=INT_MIN;
    for(int i=0 ; i< arr.size() ; i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

public:
    int smallestDivisor(vector<int>& arr, int threshold) {
        int s=1;
        int e=maximum(arr);
        int ans=10000;

        while(s<=e){
            int mid=s+(e-s)/2;
        int div=divisor(arr,mid);

            if(div  <= threshold){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};