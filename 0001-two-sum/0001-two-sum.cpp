class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>ans;
        for(int i=0 ; i<arr.size(); i++){
            int x=target-arr[i];

            if(ans.find(x)!=ans.end()){
                return {ans[x],i};
            }
        ans[arr[i]]=i;
        }
       return  {};
    }
};