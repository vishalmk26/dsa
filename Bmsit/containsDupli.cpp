// time : O(n log n)
// space : O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i =0 ; i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end()) return true;
            else mp[nums[i]] = 1;
        }
        return false;
    }
};

/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.*/