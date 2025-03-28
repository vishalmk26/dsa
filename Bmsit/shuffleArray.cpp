// time : O(n)
// space : O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        int i1 = 0, i2 = n;
        for(int i = 0; i<nums.size(); i+=2){
            res[i] = nums[i1];
            res[i+1] = nums[i2];
            i1++;
            i2++;
        }
        return res;
    }
};
/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 

Example 1:

Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].*/