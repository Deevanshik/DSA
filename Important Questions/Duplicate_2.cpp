// Link -> https://leetcode.com/problems/contains-duplicate-ii/description/
// Solution : 
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;  // Stores the last seen index of each number
        
        for(int i = 0; i < nums.size(); i++) {
            if(mpp.find(nums[i]) != mpp.end() && (i - mpp[nums[i]]) <= k) {
                return true;
            }
            mpp[nums[i]] = i; // Update last seen index
        }
        return false;
    }
};
