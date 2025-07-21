class Solution {
private:
    int getPivot(vector<int>& nums, int n) {
        int left = 0, right = n - 1;
        while (left < right) {
            int mid = left + ((right - left) / 2);
            if (nums[mid] >= nums[0])
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }

    int binarySearch(vector<int>& nums, int left, int right, int target) {
        int start = left, end = right;
        while (start <= end) {
            int mid = start + ((end - start) / 2);
            if (nums[mid] == target) {
                return mid;
                break;
            } else {
                if (nums[mid] < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        if (target >= nums[pivot] && target <= nums[n - 1])
            return binarySearch(nums, pivot, n - 1, target);
        else
            return binarySearch(nums, 0, pivot - 1, target);
    }
};
