class Solution {
  private:
    void swap(char *a, char *b) {
        char temp = *a;
        *a = *b;
        *b = temp;
    }

  public:
    int secondsToRemoveOccurrences(string s) {
        int count = 0;
        while (true) {
            bool zeroOne = false;
            for (int i = 0; i < s.size() - 1; i++) {
                if (s[i] == '0' && s[i + 1] == '1') {
                    swap(&s[i], &s[i + 1]);
                    i++;
                    zeroOne = true;
                }
            }
            if (zeroOne == false)
                break;
            count++;
        }
        return count;
    }
};
