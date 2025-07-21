class Solution {
public:
    static bool comparator(vector<int>& a, vector<int>& b) {
        if (a[0] != b[0])
            return (a[0] > b[0]);
        return (a[1] < b[1]);
    }

    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), comparator);
        int max = INT_MIN, ans = 0;
        for (auto it : properties) {
            if (max > it[1])
                ans++;
            else
                max = it[1];
        }
        return ans;
    }
};
