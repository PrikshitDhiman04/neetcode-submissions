class Solution {
public:
//optimal
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int n = heights.size();

        int lp = 0;
        int rp = n - 1;

        while(lp < rp){
            int wt = rp -lp;
            int ht = min(heights[lp], heights[rp]);

            int currWater = wt * ht;
            maxWater = max(maxWater, currWater);

            heights[lp] < heights[rp] ? lp++ : rp--;

            
        }

        return maxWater;
        
    }
};
