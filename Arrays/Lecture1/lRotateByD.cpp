#include<iostream>
#include<vector>
#include<vector>

using namespace std;
// #include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d) {

    if (n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    //step 1:
    reverse(arr, arr + d);

    //step 2:
    reverse(arr + d, arr + n);

    //step 3:
    reverse(arr, arr + n);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

// // void lRotate(int arr[],int n,int d){
// //     int temp[d];
// //     for (int i = 0; i < d; i++)
// //     {
// //         /* code */
// //         temp[i]=arr[i];
// //     }
// //     for (int i = d; i < n; i++)
// //     {
// //         /* code */
// //         arr[i-d]=arr[i];
// //     }
// //     for (int i = n-d; i < n; i++)
// //     {
// //         /* code */
// //         arr[i]=temp[i-(n-d)];
// //     }
// // }

// void rRotate(vector<int>& arr,int n,int d){
//     int temp[d];
//     // for(int i=n-d;i<n;i++){
//     //     temp[i-(n-d)]=arr[i];
//     // }
//     // for (int i = d; i < n; i++)
//     // {
//     //     /* code */
//     //     arr[i]=arr[i-d];
//     // }
//     // for (int i = 0; i < d; i++)
//     // {
//     //     /* code */
//     //     arr[i]=temp[i];
//     // }
//     reverse(arr.begin(),arr.end());
//     reverse(arr.begin(),arr.begin()+d);
//     reverse(arr.begin()+d,arr.end());
// }

// int main(){
//     vector<int> arr;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     d=d%(arr.size());
//     rRotate(arr,arr.size(),d);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         /* code */
//         cout << arr[i] << endl;
//     }
//     return 0;
// }