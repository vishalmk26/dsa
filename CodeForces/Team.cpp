#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin >> n;
    int ans=0;
    vector<vector<int>> arr(n, vector<int> (3));
    for(int i=0;i<n; i++){
        int cnt=0;
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1) cnt++;
        }
        if(cnt>=2) ans++;
    }
    cout << ans;
    return 0;
}