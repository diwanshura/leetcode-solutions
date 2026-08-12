class Solution {
public:
    int differenceOfSum(vector<int>& arr) {
        int size=arr.size();
        int sum=0;
        int digit=0;
       
        for(int i=0 ; i<size;i++){
            sum+=arr[i];
   
        }

        for(int i=0 ; i<size;i++){
             while(arr[i]!=0){
                digit+=arr[i]%10;
                arr[i]/=10;

            }
        }

        
        return sum-digit;
    }
};