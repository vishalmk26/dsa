#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int high;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        mpp[arr[i]]+=1;
    }
    for(auto it: mpp){
        if(it.second>it.first){
            high=it.second;
            
        }
    }
    cout << high << endl;
    return 0;
}