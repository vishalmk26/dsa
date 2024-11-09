#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int stock(vector<int> arr){
    int mini=arr[0];
    int profit=0,cost;
    for (int i = 1; i < arr.size(); i++)
    {
        /* code */
        cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    return profit;
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
    cout << stock(arr);
    return 0;
}