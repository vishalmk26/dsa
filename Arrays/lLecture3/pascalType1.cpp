#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// given row and col we have to find the element at the place
// n=r, r=c
int pascal(int n,int r){
    int res =1;
    for (int i = 0; i < r; i++)
    {
        /* code */
        res= res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int main(){
    int n,r;
    cin >> n;
    cin >> r;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr[i];
    // }
    // cin >> N;
    
    cout << pascal(n,r);
    return 0;
}
