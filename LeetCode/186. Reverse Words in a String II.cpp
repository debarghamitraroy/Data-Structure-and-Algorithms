class Solution {
  public:
    void reverseWords(vector<char> &s) {
        reverse(s.begin(), s.end());
        int j = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }
        reverse(s.begin() + j, s.begin() + n);
    }
};
