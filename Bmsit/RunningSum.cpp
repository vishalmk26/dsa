// time : O(n)
// space : O(1) , actually O(n) but it is the requirement in the question

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> ans(nums.size());
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            ans[i] = sum;
        } 
        return ans;
    }
};
// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].