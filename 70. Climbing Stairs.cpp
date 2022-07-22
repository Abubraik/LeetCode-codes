class Solution {
public:
    int climbStairs(int n) {
        vector <int> sol;
        sol.push_back(1);
        sol.push_back(2);
        for (int i = 2; i < n; i++)
            sol.push_back(sol[i - 1] + sol[i - 2]);

        return sol[n - 1];
    }
};