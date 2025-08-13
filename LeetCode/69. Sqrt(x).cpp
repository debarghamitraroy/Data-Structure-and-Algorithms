class Solution {
  public:
    int mySqrt(long long int x) {
        long long int start = 0, end = x, ans = 0;
        while (start <= end) {
            long long int mid = start + ((end - start) / 2);
            long long int square = mid * mid;
            if (square == x) {
                ans = mid;
                break;
            } else {
                if (square < x) {
                    ans = mid;
                    start = mid + 1;
                } else
                    end = mid - 1;
            }
        }
        if (x <= 1)
            return x;
        else
            return ans;
    }
};
