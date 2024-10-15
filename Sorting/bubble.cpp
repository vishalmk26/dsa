#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void bubble(int arr[],int n){
    int swapped=0;
    for (int i = n-1; i>=1; i--)
    {
        for (int j = 0; j <i; j++)
        {
            /* code */
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if (swapped==0) {
            break;
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
    bubble(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
}