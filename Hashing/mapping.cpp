#include<iostream>
#include<algorithm>
#include<vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    //use unordered_map over map due better time complexity
    unordered_map<int, int> mpp;
    //precompute
    for (int i = 0; i < n; i++)
    {
        /* code */
        mpp[arr[i]]++;
    }
    

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }
    return 0;
}
