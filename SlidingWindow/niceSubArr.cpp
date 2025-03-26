class Solution {
public:
    int binarySubArr(vector<int>& nums, int k){
        if(k<0) return 0;
        int l=0, r=0, sum=0, cnt=0;
        while(r<nums.size()){
            sum += nums[r]%2;
            while(sum > k){
                sum -= nums[l]%2;
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return binarySubArr(nums, k) - binarySubArr(nums, k-1);
    }
};