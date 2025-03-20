// time : O(n*n)
// space : O(1)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]) cnt+=1;
            }
        }
        return cnt;
    }
};
/*Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.*/