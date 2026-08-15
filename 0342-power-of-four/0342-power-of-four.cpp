class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        return (log(n)/log(4))==(long)(log(n)/log(4));
    }
};