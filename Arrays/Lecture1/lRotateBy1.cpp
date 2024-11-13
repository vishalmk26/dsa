#include<iostream>
#include<vector>
#include<vector>

using namespace std;

void lRotate(int arr[],int n){
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        /* code */
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
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
    lRotate(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<  endl;
    }
    
    return 0;
}