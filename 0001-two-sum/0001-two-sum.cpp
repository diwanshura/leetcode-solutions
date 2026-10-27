
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            int x = target - arr[i];

            if (mp.find(x) != mp.end()) {
                return {mp[x], i};
            }

            mp[arr[i]] = i;
        }

        return {};
    }
};
