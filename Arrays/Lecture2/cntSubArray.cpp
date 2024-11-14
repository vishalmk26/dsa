#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    map<int,int> mpp;
    mpp[0]=1;
    int preSum=0, cnt=0;
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        preSum+=nums[i];
        int remove = preSum - k;
        cnt+=mpp[remove];
        mpp[preSum]++;
    }
    return cnt;
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