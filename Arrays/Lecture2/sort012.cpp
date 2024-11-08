#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// consider red, white, blue as 0,1,2
void sortColors(vector<int>& nums) {
    int n=nums.size();
    int low=0, mid=0, high=n-1; 
    while (mid<=high)
    {
        /* code */
        if (nums[mid]==0)
        {
            /* code */
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid]==1)
        {
            /* code */
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
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
    sortColors(arr);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
    return 0;
}