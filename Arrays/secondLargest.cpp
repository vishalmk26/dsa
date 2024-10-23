#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sLargest(int arr[], int n){
    int largest=arr[0];
    int secLargest=-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]> largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i] > secLargest){
            secLargest=arr[i];
        }
    }
    cout << secLargest << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    sLargest(arr,n);
    return 0;
}