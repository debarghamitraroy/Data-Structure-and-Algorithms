class Solution {
  public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        vector<int> answer;
        int row = matrix.size();
        int column = matrix[0].size();
        int count = 0;
        int total = row * column;
        int startingRow = 0;
        int startingColumn = 0;
        int endingRow = row - 1;
        int endingColumn = column - 1;
        while (count < total) {
            for (int index = startingColumn;
                 count < total && index <= endingColumn; index++) {
                answer.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for (int index = startingRow; count < total && index <= endingRow;
                 index++) {
                answer.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--;
            for (int index = endingColumn;
                 count < total && index >= startingColumn; index--) {
                answer.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            for (int index = endingRow; count < total && index >= startingRow;
                 index--) {
                answer.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return answer;
    }
};
