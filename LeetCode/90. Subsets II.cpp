class Solution {
private:
    void subsetGenerator(vector<int>& nums, vector<vector<int>>& ans, int index, vector<int>& subset) {
        ans.push_back(subset);
        for (int i = index; i < nums.size(); i++) {
            if (i != index && nums[i] == nums[i - 1])
                continue;
            subset.push_back(nums[i]);
            subsetGenerator(nums, ans, i + 1, subset);
            subset.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        subsetGenerator(nums, ans, 0, subset);
        return ans;
    }
};
