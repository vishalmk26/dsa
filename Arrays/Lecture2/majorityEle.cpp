#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int majorityElement(vector<int>& nums) {
    map<int,int> mpp;  
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if (it.second > (nums.size())/2 )
        {
            /* code */
            return it.first;
        }
    }
    return -1;      
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

// better soluion
