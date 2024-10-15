#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void selection(int arr[],int n){
    int min;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i] ;
    }
    selection(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
    return 0;
} 