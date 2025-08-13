class Solution {
  private:
    int sum_digits(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }
    int product_digits(int n) {
        int product = 1;
        while (n) {
            product *= (n % 10);
            n /= 10;
        }
        return product;
    }

  public:
    bool checkDivisibility(int n) {
        int sum = sum_digits(n);
        int product = product_digits(n);
        int total = sum + product;
        if (n % total == 0)
            return true;
        else
            return false;
    }
};
