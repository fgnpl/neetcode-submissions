class Solution {
public:
    int maxArea(vector<int>& heights) {
       int p1 = 0, p2 = heights.size() - 1; 
       int prod = 0;

       while (p1 < p2) {
        if ((p2 - p1) * min(heights[p1], heights[p2]) > prod) {
            prod = (p2 - p1) * min(heights[p1], heights[p2]);
        } 
        if (heights[p1] < heights[p2]) {
            p1++;
        } else {
            p2--;
        }
       }
        
        return prod;
    } 
};
