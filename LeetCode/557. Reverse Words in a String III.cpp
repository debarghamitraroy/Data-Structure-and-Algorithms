class Solution {
private:
    void swap(char* a, char* b) {
        char temp = *a;
        *a = *b;
        *b = temp;
    }

    void reverse(string& s, int start, int end) {
        while (start < end) {
            swap(&s[start], &s[end]);
            start++;
            end--;
        }
    }

public:
    string reverseWords(string s) {
        int j = 0, n = s.size() - 1;
        for (int i = 0; i < n + 1; i++) {
            if (s[i + 1] == ' ' || i == n) {
                reverse(s, j, i);
                j = i + 2;
            }
        }
        return s;
    }
};
