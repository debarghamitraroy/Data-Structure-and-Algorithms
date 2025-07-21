class Solution {
    public:
        bool isPalindrome(int x) {
            int reverse = 0;
            while (x != 0) {
                reverse = (reverse * 10) + (x % 10);
                x /= 10;
            }
            if (x < 0 || (x % 10 == 0 && x != 0))
                return false;
            else {
                if (x == reverse)
                    return true;
                else
                    return false;
            }
        }
    };