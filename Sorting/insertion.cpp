#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insertion(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp= arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    
}

int main(){
    int n;
    cin >>n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    insertion(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
}