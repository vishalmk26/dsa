#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int ind=-1;
    int n=nums.size();
    for (int i = n-2; i >=0; i--)
    {
        /* code */if (nums[i] < nums[i+1])
        {
            /* code */ind = i;
            break;
        }
    }
    for (int i = n-1; i > ind; i--)
    {
        /* code */if (nums[i] > nums[ind])
        {
            /* code */
            swap(nums[i],nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind+1, nums.end());
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
    nextPermutation(arr);
    for (int i = 0; i < n; i++)
    {
        /* code */cout << arr[i] << endl;;
    }
    
    return 0;
}