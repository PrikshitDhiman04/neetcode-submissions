class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        long long expected = (long long)n * (n + 1)/2;
        long long actual = 0;

        for(int i = 0; i< n; i++){
            actual += nums[i];
        }

        return expected - actual;
    }
};
