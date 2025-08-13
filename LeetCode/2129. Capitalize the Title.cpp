class Solution {
  public:
    string capitalizeTitle(string title) {
        int n = title.length();
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        if (n <= 2)
            return title;
        if ((title[2] == ' ' || title[1] == ' ') && n > 1)
            title[0] = tolower(title[0]);
        else
            title[0] = toupper(title[0]);
        for (int i = 0; i < n - 3; i++) {
            if (title[i] == ' ' && (title[i + 2] == ' ' || title[i + 3] == ' '))
                title[i + 1] = tolower(title[i + 1]);
            else if (title[i] == ' ')
                title[i + 1] = toupper(title[i + 1]);
        }
        return title;
    }
};
