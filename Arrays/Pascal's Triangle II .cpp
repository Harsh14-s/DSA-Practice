class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long val = 1;
        row.push_back(val);  // C(n, 0) = 1

        for (int k = 1; k <= rowIndex; k++) {
            val = val * (rowIndex - k + 1) / k;  // use formula
            row.push_back(val);
        }

        return row;
    }
};
