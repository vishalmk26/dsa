#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    int n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    int cnt=0;
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i]==1){
            cnt++;
            maxi=max(maxi, cnt);
        }
        else{
            cnt=0;
        }
    }
    cout << maxi;
    return 0;
}