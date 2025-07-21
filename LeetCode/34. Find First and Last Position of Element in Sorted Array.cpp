class Solution {
private:
    int firstOccurrance(vector<int>& arr, int key) {
        int size = arr.size(), start = 0, end = size - 1, ans = -1;
        while (start <= end) {
            int mid = start + ((end - start) / 2);
            if (arr[mid] == key) {
                ans = mid;
                end = mid - 1;
            } else {
                if (arr[mid] < key)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return ans;
    }

    int lastOccurrance(vector<int>& arr, int key) {
        int size = arr.size(), start = 0, end = size - 1, ans = -1;
        while (start <= end) {
            int mid = start + ((end - start) / 2);
            if (arr[mid] == key) {
                ans = mid;
                start = mid + 1;
            } else {
                if (arr[mid] < key)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOccurrance(nums, target);
        int last = lastOccurrance(nums, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
