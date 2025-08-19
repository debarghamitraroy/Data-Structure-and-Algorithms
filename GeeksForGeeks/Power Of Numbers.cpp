class Solution {
  private:
    int reverseNumber(int n) {
        int reversed = 0;
        while (n) {
            reversed = (reversed * 10) + (n % 10);
            n /= 10;
        }
        return reversed;
    }
    int reverseExponentiationHelper(int base, int exponent) {
        if (base == 0)
            return 0;
        if (exponent == 0)
            return 1;
        int result = 0;
        if (exponent % 2 == 0) {
            result = reverseExponentiationHelper(base, exponent / 2);
            return result * result;
        } else {
            result = reverseExponentiationHelper(base, exponent - 1);
            return base * result;
        }
    }

  public:
    int reverseExponentiation(int n) {
        int reversed = reverseNumber(n);
        return reverseExponentiationHelper(n, reversed);
    }
};
