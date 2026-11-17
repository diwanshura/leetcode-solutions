class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int candid=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(count==0){
                candid=arr[i];
            }
            if(arr[i]==candid){
                count++;
            }
            else{
                count--;
            }
        }
        return candid;
    }
};