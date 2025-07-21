class Solution {
private:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        else
            return false;
    }

public:
    int maxVowels(string s, int k) {
        int ans = INT_MIN, currCount = 0, i = 0, j;
        for (j = 0; j < k - 1; j++) {
            if (isVowel(s[j]))
                currCount++;
        }
        while (j < s.size()) {
            if (isVowel(s[j]))
                currCount++;
            ans = max(ans, currCount);
            if (isVowel(s[i]))
                currCount--;
            i++;
            j++;
        }
        return ans;
    }
};
