class Solution {
public:
    bool search(vector<int>& arr, int target) {
       int x=arr.size();
       for(int i=0 ; i<x; i++){
        if(arr[i]==target ) return true;
       }
       return false;
    }
};