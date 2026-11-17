class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int e=arr.size();
        
int j=0;
        for(int i=0 ; i<e ; i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
            j++;
            }
           
        }
        
    }
};