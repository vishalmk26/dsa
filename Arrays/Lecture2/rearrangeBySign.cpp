#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// if pos==neg
// vector<int> rearrangeArray(vector<int>& nums) {
//     int n=nums.size();
//         vector<int> ans(n,0);
//         int pIndex=0, nIndex=1;
//         for (int i = 0; i < n; i++)
//         {
//             /* code */
//             if (nums[i]<0)
//             {
//                 /* code */
//                 ans[nIndex]=nums[i];
//                 nIndex+=2;
//             }
//             else{
//                 ans[pIndex]=nums[i];
//                 pIndex=+2;
//             }
//         }
//         return ans;
// }

// if pos!=neg
void rearrangeArray(vector<int> nums){
    vector<int> pos, neg;
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        if (nums[i]<0)
        {
            /* code */
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[i*2]=pos[i];
            nums[(i*2)+1]=neg[i];
        }
        int index=neg.size()*2;;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            /* code */
            nums[index]=pos[i];
            index++;
        }
        
    }
    else{
        for(int i=0;i<pos.size();i++){
            nums[i*2]=pos[i];
            nums[(i*2)+1]=neg[i];
        }
        int index=pos.size()*2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            /* code */
            nums[index]=neg[i];
            index++;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
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
    rearrangeArray(arr)    ;

    return 0;
}