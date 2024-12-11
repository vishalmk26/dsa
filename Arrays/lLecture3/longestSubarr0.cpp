#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int maxLen(vector<int>& arr) {
    // code here
    int sum = 0;
    int maxi = 0;
    unordered_map<int,int> mpp;
    for(int i=0; i< arr.size(); i++){
        sum += arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                maxi = max(maxi, i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxi;
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
    maxLen(arr);
    return 0;
}