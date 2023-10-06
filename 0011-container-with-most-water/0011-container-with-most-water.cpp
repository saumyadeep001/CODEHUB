class Solution {
public:
   int maxArea(vector<int>& height) {
    int area = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int l= min(height[i], height[j]);
        area = max(area,(j - i) * l);
        while (height[i] <= l && i < j) 
            i++;
        while (height[j] <= l && i < j) 
            j--;
    }
    return area;
}
};