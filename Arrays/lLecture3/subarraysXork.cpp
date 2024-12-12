#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    map<int,int> mpp;
    int xr=0;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr = xr ^ a[i];
        int x = xr ^ b;
        cnt += mpp[x];
        mpp[xr]++;
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
    int k;
    cin >> k;
    subarraysWithSumK(arr,k);
    return 0;
}