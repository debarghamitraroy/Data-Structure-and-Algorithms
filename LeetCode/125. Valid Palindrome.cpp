class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            return true;
        return false;
    }

    char toLowerCase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start <= end) {
            if (s[start] != s[end])
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i]))
                temp.push_back(s[i]);
        }
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }
        return checkPalindrome(temp);
    }
};
