class Solution {
  public:
    int findComplement(int num) {
        int temp = num, mask = 0;
        if (num == 0)
            return 1;
        while (temp != 0) {
            mask = (mask << 1) | 1;
            temp = temp >> 1;
        }
        int ans = (~num) & mask;
        return ans;
    }
};
