class Solution {
public:
    vector<int> dp;

    int recur(vector<int>& cost, int i) {
        int n = cost.size();
        if(i >= n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
        return dp[i] =
            cost[i] + min(recur(cost, i + 1),recur(cost, i + 2));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.resize(n, -1);
        return min(recur(cost, 0),recur(cost, 1));
    }
};