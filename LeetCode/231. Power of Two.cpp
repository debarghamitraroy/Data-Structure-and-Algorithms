class Solution {
  public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return n &= (n - 1); // Brian Kernighan's Algorithm
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)