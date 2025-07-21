class Solution {
public:
    int countEven(int num) {
        int count = 0, n = num, sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        if (sum % 2 == 0)
            count = num / 2;
        else
            count = (num - 1) / 2;
        return count;
    }
};
