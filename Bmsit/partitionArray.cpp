// time : O(2n)
// space : O(1)

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int lc= 0, gc=0, pc =0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<pivot) lc+=1;
            else if(nums[i]>pivot) gc+=1;
            else pc+=1;
        }
        vector<int> ans(nums.size());
        int i =0;
        int j = lc;
        int k = lc+pc;
        for(int num : nums){
            if(num<pivot) {
                ans[i] = num;
                i++;
            }
            else if(num>pivot){
                ans[k] = num;
                k++;
            }
            else{
                ans[j] = num;
                j++;
            }
        }
        return ans;
    }
};
// 2161. Partition Array According to Given Pivot