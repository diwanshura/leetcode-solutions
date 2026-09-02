class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int size= arr.size();
        vector<int>ans(size);
        for(int i=0 ; i<size ; i++){
            for(int j=0 ; j<=i ; j++){
                if(ans[i]=arr[i])  return true;
                else if (ans[i]=arr[i]-arr[j]  &&  j!=i )  return true;
            }
        }
return false;

    }
};