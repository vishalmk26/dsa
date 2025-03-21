// time : O(n)
// space : O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0, left = 0, right =0, zeros = 0, len;
        while(right<nums.size()){
            if(nums[right]==0) zeros++;
            if(zeros>k){
                if(nums[left]==0) zeros--;
                left++;
            }
            if(zeros<=k){
                len = right-left +1;
                maxlen = max(maxlen, len);
            }
            right++;
        }
        return maxlen;
    }
};

/*Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.*/