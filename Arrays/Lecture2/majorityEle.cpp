#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int majorityElement(vector<int>& nums) {
     int cnt=0;
     int el;
     for (int i = 0; i < nums.size(); i++)
     {
        /* code */
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if (nums[i]==el)
        {
            /* code */
            cnt++;
        }
        else{
            cnt--;
        }
     }
     int cnt1=0;
     for (int i = 0; i < nums.size(); i++)
     {
        /* code */
        if (nums[i]==el)
        {
            /* code */
            cnt1++;
        }
     }
     if (cnt1> (nums.size()/2))
     {
        /* code */return el;
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
    // map<int,int> mpp;  
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     /* code */
    //     mpp[nums[i]]++;
    // }
    // for(auto it : mpp){
    //     if (it.second > (nums.size())/2 )
    //     {
    //         /* code */
    //         return it.first;
    //     }
    // }
    // return -1; 
