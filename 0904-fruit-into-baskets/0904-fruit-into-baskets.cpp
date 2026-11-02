class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int l=0;
        int r=0;
        int maxcount=0;
        unordered_map<int,int>ans;

        while(r<arr.size()){
            ans[arr[r]]++;
            
                while(ans.size() >2 ){
                    ans[arr[l]]--;
                    if(ans[arr[l]]==0){
                        ans.erase(arr[l]);
                    }
                    l++;
                }
                
            
            if(ans.size()<=2){
                    maxcount=max(maxcount,r-l+1);
                    r++;
                }
        }
        return maxcount;
        
    }
};
