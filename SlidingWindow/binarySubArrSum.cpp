class Solution {
public:
    int lesserEqual(vector<int>& nums, int goal){
        // lesser than or equal to goal
        if (goal<0) return 0;
        int n = nums.size(), cnt =0, l=0, r=0, sum=0;
        while(r<n){
            sum = sum + nums[r];
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lesserEqual(nums, goal) - lesserEqual(nums, goal-1);
    }
};