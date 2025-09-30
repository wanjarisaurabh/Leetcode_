
//Area of triangle using shoelace formula -----

// Shoelace formula alone is sufficient, formula use to find the area on the vertices rather than the side 
// Heron’s formula is more complex and prone to floating-point rounding errors. The shoelace formula is exact and faster for this case.
class Solution {
    public double largestTriangleArea(int[][] points) {
        int n = points.length;
        double maxArea = 0.0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    double x1 = points[i][0], y1 = points[i][1];
                    double x2 = points[j][0], y2 = points[j][1];
                    double x3 = points[k][0], y3 = points[k][1];

                    // Shoelace formula
                    double area = 0.5 * Math.abs(
                        x1 * (y2 - y3) +
                        x2 * (y3 - y1) +
                        x3 * (y1 - y2)
                    );

                    maxArea = Math.max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
}