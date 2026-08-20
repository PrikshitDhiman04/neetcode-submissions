class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n = nums.size();

        for(int i = 0; i < n; i ++){
            if(mp.count(nums[i])){
                return true;
            }
            mp[nums[i]] = i;
        }

        return false;
    }
};