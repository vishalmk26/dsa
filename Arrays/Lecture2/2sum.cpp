#include<iostream>
#include<vector>
#include<algorithm>
#include<map>


using namespace std;

vector<int> twoSum(vector<int> a, int target){
    map<int,int> mpp;//stores the value and the index pair
    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        int num=a[i];
        int more = target - num;
        if (mpp.find(more)!= mpp.end())
        {
            /* code */
            return {mpp[more],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
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
    int target;
    cin >> target;
    vector<int> result = twoSum(arr,target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}

// brute force
// vector<int> twoSum(vector<int> arr,int target){
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         for (int j = i+1; j < n; j++)
//         {
//             /* code */
//             if (arr[i]+arr[j]==target)
//             {
//                 return {i,j};
//             }
//         }
//     }
// }