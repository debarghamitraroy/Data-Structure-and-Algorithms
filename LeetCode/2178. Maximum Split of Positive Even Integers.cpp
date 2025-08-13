class Solution {
  public:
    vector<long long int> maximumEvenSplit(long long int finalSum) {
        vector<long long int> temp;
        if (finalSum % 2 == 0) {
            long long int i = 2, sum = 0;
            while ((sum + i) <= finalSum) {
                temp.push_back(i);
                sum += i;
                i += 2;
            }
            int n = temp.size();
            long long int rem = temp[n - 1] + (finalSum - sum);
            temp.pop_back();
            temp.push_back(rem);
        }
        return temp;
    }
};
