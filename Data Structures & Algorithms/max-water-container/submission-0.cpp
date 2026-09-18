class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_water = 0;
        while(left < right){
            int width = right - left;
            if(heights[left] < heights[right]){
                int height = heights[left];
                max_water = max(max_water, width * height);
                left ++;
            }
            else{
                int height = heights[right];
                max_water = max(max_water, width * height);
                right --;
            }

        }
        return max_water;
    }
};
