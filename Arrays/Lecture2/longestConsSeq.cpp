#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int cnt=0;
    int longest=1;
    int lastSmaller = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */if (nums[i]-1==lastSmaller)
        {
            /* code */cnt++;
            lastSmaller = nums[i];
        }
        else if (nums[i]!=lastSmaller)
        {
            /* code */cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    return 0;
}