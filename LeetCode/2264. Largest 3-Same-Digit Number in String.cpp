class Solution {
  public:
    string largestGoodInteger(string num) {
        string res = "";
        for (int i = 0; i < num.size() - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string candidate = num.substr(i, 3);
                if (candidate > res)
                    res = candidate;
            }
        }
        return res;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)