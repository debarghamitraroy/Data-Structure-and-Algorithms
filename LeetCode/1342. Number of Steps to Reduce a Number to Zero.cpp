class Solution {
  public:
    int numberOfSteps(int num) {
        int count = 0, temp = num;
        if (temp <= 1)
            count = temp;
        else {
            while (temp > 0) {
                if (temp % 2 != 0) {
                    temp--;
                    count++;
                } else {
                    temp /= 2;
                    count++;
                }
            }
        }
        return count;
    }
};
