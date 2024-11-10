#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    // Code here
    int maxi= INT_MIN;
    vector<int> a;
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i] >= maxi){
            a.push_back(arr[i]);
            
        }
        maxi=max(maxi,arr[i]);
    }
    reverse(a.begin(),a.end());
    return a;
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