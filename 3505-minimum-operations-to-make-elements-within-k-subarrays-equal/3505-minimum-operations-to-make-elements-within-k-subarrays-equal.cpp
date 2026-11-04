class Solution {
public:
    using ll = long long;
    multiset<int> low, high;
    ll lowSum = 0, highSum = 0;

    void balance() {
        while (low.size() > high.size() + 1) {
            int val = *low.rbegin(); // gives maximum of low  our median
            low.erase(prev(low.end()));
            lowSum -= val;
            high.insert(val);
            highSum += val;
        }

        while (low.size() < high.size()) {
            int val = *high.begin();
            high.erase(high.begin());
            highSum -= val;
            low.insert(val);
            lowSum += val;
        }
    }
    void add(int val) {
        if (low.empty() || val <= *low.rbegin()) {
            low.insert(val);
            lowSum += val;
        } else {
            high.insert(val);
            
            highSum += val;
        }
        balance();
    }
    void remove(int val) {
        auto it = low.find(val);
        if (it != low.end()) {
            low.erase(it);
            lowSum -= val;
        } else {
            it = high.find(val);
            high.erase(it);
            highSum -= val;
        }
        balance();
    }
    ll getCost() {
        ll median = *low.rbegin();
        return median * low.size() - lowSum + highSum - median * high.size();
    }

    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        vector<ll> cost(n - x + 1);

        for (int i = 0; i < x; i++) {
            add(nums[i]);
        }
        cost[0] = getCost();
        for (int i = x; i < n; i++) {
            remove(nums[i - x]);
            add(nums[i]);
            cost[i - x + 1] = getCost();
        }
        const ll INF = LLONG_MAX / 4;
        vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, INF));
        dp[0][0] = 0;

        for (int used = 0; used <= k; used++) {
            for (int i = 0; i <= n; i++) {

                if (dp[used][i] == INF)
                    continue;
                if (i < n)
                    dp[used][i + 1] = min(dp[used][i + 1], dp[used][i]);

                if (used < k && (i + x <= n)) {
                    dp[used + 1][i + x] =
                        min(dp[used + 1][i + x], dp[used][i] + cost[i]);
                }
            }
        }

        return *min_element(dp[k].begin(), dp[k].end());
    }
};