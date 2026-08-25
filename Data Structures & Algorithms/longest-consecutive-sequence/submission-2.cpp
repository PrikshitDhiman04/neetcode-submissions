class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int x : st) {
            // checking if x is the first number??
            if (st.find(x - 1) == st.end()) {
                int cnt = 1;
                int current = x;

                while (st.find(current + 1) != st.end()) {
                    cnt++;
                    current++;
                }
                 longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
