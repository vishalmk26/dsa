class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
    //     int low = 0;
    //     int high = n-1;
    //     while(low<=high){
    //         int mid = (low+high)/2;

    //    }
    vector<int> ans;
        int i = 0, j = n-1;
        while(i<=j){
            if(numbers[i]+numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i]+numbers[j] < target) i++;
            else j--;
        }
        return ans;

    }
};