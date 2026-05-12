class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int size=arr.size();
        int ans=0;
        unordered_map<int,int>hash;
        for(int i=0 ; i<size ; i++){
            hash[arr[i]]++;
        }

        for(int i=0 ; i<size ;i++){
            if(hash[arr[i]]==1){
                ans= arr[i];
                break;
            }
        }
        return ans;
    }
};