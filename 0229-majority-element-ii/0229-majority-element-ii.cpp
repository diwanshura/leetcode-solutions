
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        // First pass: Find possible candidates
        for (int i = 0; i < nums.size(); i++) {

            if (count1 == 0 && nums[i] != candidate2) {
                candidate1 = nums[i];
                count1++;
            }
            else if (count2 == 0 && nums[i] != candidate1) {
                candidate2 = nums[i];
                count2++;
            }
            else if (nums[i] == candidate1) {
                count1++;
            }
            else if (nums[i] == candidate2) {
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Second pass: Verify candidates
        count1 = 0;
        count2 = 0;

        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> ans;
        int n = nums.size();

        if (count1 > n / 3) ans.push_back(candidate1);
        if (count2 > n / 3) ans.push_back(candidate2);

        return ans;
    }
};
