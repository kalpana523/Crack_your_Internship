class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
        vector<int> v;
        while (minr <= maxr && minc <= maxc) {
            // RIGHT
            for (int j = minc; j <= maxc; j++) {
                v.push_back(matrix[minr][j]);
            }
            minr++;
            if (minr > maxr || minc > maxc) break;

            // DOWN
            for (int i = minr; i <= maxr; i++) {
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
            if (minr > maxr || minc > maxc) break;

            // LEFT
            for (int j = maxc; j >= minc; j--) {
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            if (minr > maxr || minc > maxc) break;

            // UP
            for (int i = maxr; i >= minr; i--) {
                v.push_back(matrix[i][minc]);
            }
            minc++;
            if (minr > maxr || minc > maxc) break;
        }
        return v;
    }
};
