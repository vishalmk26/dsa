#include<iostream>
#include<vector>
#include<vector>

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
    int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << largest << endl;
    return 0;
}