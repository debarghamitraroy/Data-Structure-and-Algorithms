class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0, temp = n, raw = n;
        while (raw != 0) {
            product *= (raw % 10);
            raw /= 10;
        }
        while (temp != 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        int diff = product - sum;
        return diff;
    }
};
