int solve(vector<int>& nums, vector<int>& values) {
    
    int n0 = INT_MIN, n1 = INT_MIN, rv = INT_MIN;

    for (int i = 0; i < nums.size(); ++i) {
        n0 = max(n0, values[i] - nums[i]);
        n1 = max(n1, values[i] + nums[i]);
        rv = max(rv, n0 + n1);
    }
    return rv;
}
