class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int y=1;
        int sum=0;
        while(x!=0){
             sum+=(x%10);
            y*=(x%10);
            x/=10;
        }
         return n % (sum + y) == 0;
    }
};