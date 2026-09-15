class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        // Check from the left end
        for (int i = 1; i < n; i++) {
            if (colors[i] != colors[0]) {
                ans = max(ans, i);
            }
        }

        // Check from the right end
        for (int i = n - 2; i >= 0; i--) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, n - 1 - i);
            }
        }

        return ans;
    }
};