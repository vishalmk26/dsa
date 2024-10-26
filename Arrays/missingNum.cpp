#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int missingN(vector<int> a,int n){
    int xor1=0, xor2=0;
    int n1=n-1;
    for (int i = 0; i < n1; i++)
    {
        /* code */
        xor2=xor2 ^ a[i];
        xor1=xor1 ^ (i+1);
    }
    xor1=xor1^n;
    return xor1 ^ xor2;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    cout << missingN(a,n);
    return 0;
}