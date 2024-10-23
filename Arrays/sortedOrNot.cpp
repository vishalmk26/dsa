#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int sortedOrNot(int arr[],int n){
//     for (int i = 1; i < n; i++)
//     {
//         /* code */
//         if(arr[i]>=arr[i-1]){

//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int n;
    cin >> n;
    int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr[i];
    // }
    // sortedOrNot(arr,n);
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}