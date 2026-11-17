
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans1;
        vector<int> ans2;
        vector<int> boss(n);

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans1.push_back(arr[i]);
            }
            else {
                ans2.push_back(arr[i]);
            }
        }

        for(int i = 0; i < n/2; i++) {
            boss[2*i] = ans1[i];
            boss[2*i+1] = ans2[i];
        }

        return boss;
    }
};
