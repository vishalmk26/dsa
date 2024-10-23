#include<iostream>
#include<algorithm>
#include<vector>
// #include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        /* code */
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low, int high){
    if(low<high){
        int partitionIndex= partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
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
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    return 0;
}