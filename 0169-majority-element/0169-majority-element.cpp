class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cand=0;
        int count =0;
        int n=arr.size()-1;

        for(int i=0 ; i<=n ; i++){
             if(count==0) cand=arr[i];
            if(arr[i]==cand){
                count++;
            }
            else{
                count --;
            }

           
        }
        return cand;
    }
};