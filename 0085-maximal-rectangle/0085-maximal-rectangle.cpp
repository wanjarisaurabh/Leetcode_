#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int maxArea = 0;

    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        std::stack<int> st;

        for (int i = 0; i <= n; ++i) {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width = (st.empty() ? i : i - st.top() - 1);
                maxArea = std::max(maxArea, height * width);
            }
            st.push(i);
        }

        return maxArea;
    }

    int maximalRectangle(std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;

        int row = matrix.size();
        int col = matrix[0].size();
        std::vector<int> heights(col, 0);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == '1') {
                    heights[j] += 1; // Accumulate heights for consecutive '1's
                } else {
                    heights[j] = 0; // Reset height when encountering '0'
                }
            }
            maxArea = std::max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};
