class Solution {
public:
//brute force
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int n = heights.size();

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int wt = j - i;
                int ht = min(heights[i], heights[j]);
                int currWater = wt * ht;

                maxWater = max(maxWater, currWater);
            }
        }
        
        return maxWater;
    }
};
