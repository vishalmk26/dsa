#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// returns the maximum sum
// int maxSubArray(vector<int> nums){
//     int sum=0;
//     int maxi=INT_MIN;
//     for(auto it:nums){
//         sum+=nums[it];
//         maxi=max(maxi,sum);
//         if (sum<0) sum=0;
//     }
//     return maxi;
// }

// returns the subArray
void maxSubArray(vector<int> nums){
    int sum=0,ansStart,ansEnd;
    int maxi=INT_MIN, start;
    for(int i=0;i<nums.size();i++){
        if (sum ==0) start=i;
        sum+=nums[i];
        if(sum > maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if (sum<0) sum=0;
    }
    for(int i=ansStart;i<=ansEnd;i++){
        cout << nums[i] << endl;
    }
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
    maxSubArray(arr);
    return 0;
}