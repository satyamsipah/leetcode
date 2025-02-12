class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0, rp = height.size()-1;

        while(lp < rp) {
            int width = rp - lp;
            int heights = min(height[lp], height[rp]);
            int currWater = width * heights;
            maxWater = max(maxWater, currWater);
            
            if(height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }

        return maxWater;
    }
};
