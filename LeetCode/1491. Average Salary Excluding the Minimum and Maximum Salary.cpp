class Solution {
  public:
    double average(vector<int> &salary) {
        sort(salary.begin(), salary.end());
        salary.pop_back();
        reverse(salary.begin(), salary.end());
        salary.pop_back();
        double sum = 0;
        for (int i = 0; i < salary.size(); i++) {
            sum = sum + salary[i];
        }
        double avg = (sum / salary.size());
        return avg;
    }
};
