class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = nums[0], n = nums.size();
        for (int i = 0; i < n; i++) {
            sum = max(sum, 0) + nums[i];
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};
