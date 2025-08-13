class Solution {
  private:
    void swap(char *a, char *b) {
        char temp = *a;
        *a = *b;
        *b = temp;
    }

  public:
    void reverseString(vector<char> &s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            swap(&s[start++], &s[end--]);
        }
    }
};
