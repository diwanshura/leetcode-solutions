class Solution {
public:
    struct Node {
        long long score;
        vector<int> ids;
    };

    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // [left, right, weight, original_index]
        vector<array<long long, 4>> a;

        for (int i = 0; i < n; i++) {
            a.push_back({
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            });
        }

        // Sort by starting point
        sort(a.begin(), a.end());

        // next[i] = first interval whose left > a[i].right
        vector<int> next(n);

        for (int i = 0; i < n; i++) {
            int l = i + 1, r = n;

            while (l < r) {
                int mid = l + (r - l) / 2;

                if (a[mid][0] > a[i][1])
                    r = mid;
                else
                    l = mid + 1;
            }

            next[i] = l;
        }

        // dp[i][k]
        // best answer from i onward using at most k intervals
        vector<vector<Node>> dp(n + 1, vector<Node>(5));

        auto better = [](const Node& x, const Node& y) {
            if (x.score != y.score)
                return x.score > y.score;

            return lexicographical_compare(
                x.ids.begin(), x.ids.end(),
                y.ids.begin(), y.ids.end()
            );
        };

        // Base case
        for (int k = 0; k <= 4; k++) {
            dp[n][k] = {0, {}};
        }

        for (int i = n - 1; i >= 0; i--) {

            for (int k = 1; k <= 4; k++) {

                // Option 1: skip current interval
                Node skip = dp[i + 1][k];

                // Option 2: take current interval
                Node take = dp[next[i]][k - 1];

                take.score += a[i][2];
                take.ids.push_back((int)a[i][3]);

                // Keep indices sorted for lexicographical comparison
                sort(take.ids.begin(), take.ids.end());

                dp[i][k] = better(take, skip) ? take : skip;
            }
        }

        return dp[0][4].ids;
    }
};