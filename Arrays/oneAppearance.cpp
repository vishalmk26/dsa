#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int Xor=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        Xor=Xor ^ arr[i];
    }
    cout << Xor;
    return 0;
}