class Solution {
public:
    int smallestIndex(vector<int>& arr) {
        int size=arr.size();
        int sum=0;
        
        for(int i=0 ; i<size ; i++){
            sum=0;
           
           while(arr[i]>0){
             int x=arr[i]%10;
             sum+=x;
             arr[i]/=10;
           }

           if(sum==i){
            return i;
           }
           

            


        }
        return -1;
        
    }
};