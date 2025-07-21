class Solution {
private:
    void subsetGenerator(vector<int> nums, int n, vector<vector<int>>& ans, int i, vector<int> subset) {
        if (i >= n) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        subsetGenerator(nums, n, ans, i + 1, subset);
        subset.pop_back();
        subsetGenerator(nums, n, ans, i + 1, subset);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        vector<int> subset;
        vector<vector<int>> ans;
        subsetGenerator(nums, n, ans, i, subset);
        return ans;
    }
};
