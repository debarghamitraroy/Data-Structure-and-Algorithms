class Solution {
  public:
    int numIdenticalPairs(vector<int> &nums) {
        size_t length = nums.size();
        int count = 0;
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j])
                    count++;
                else
                    continue;
            }
        }
        return count;
    }
};
