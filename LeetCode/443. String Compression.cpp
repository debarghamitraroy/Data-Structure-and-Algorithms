class Solution {
  public:
    int compress(vector<char> &chars) {
        int i = 0, ansIndex = 0, n = chars.size();
        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }
            chars[ansIndex++] = chars[i];
            int count = j - i;
            if (count > 1) {
                string temp = to_string(count);
                for (char ch : temp) {
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};
