class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxcount=0;
       int ans[256]={-1};
       fill(ans, ans + 256, -1);
       int size=s.size();
       

       while(r<size){
        if(ans[s[r]]!=-1){
            if(ans[s[r]]  >=l){
                l=ans[s[r]]+1;
            }
        }
        int len=r-l+1;
        maxcount=max(maxcount,len);
        ans[s[r]]=r;
        r++;

       }
       return maxcount;

            
        

    }
};