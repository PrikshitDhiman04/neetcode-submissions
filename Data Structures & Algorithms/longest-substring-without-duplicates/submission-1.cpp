class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        int hash[256];
        fill(hash, hash + 256, -1);

        int left = 0;
        int right = 0;
        int maxLen = 0;

        while (right < n) {

            if (hash[s[right]] >= left) {
                left = hash[s[right]] + 1;
            }

            hash[s[right]] = right;

            int len = right - left + 1;
            maxLen = max(maxLen, len);

            right++;
        }

        return maxLen;
    }
};