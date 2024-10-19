#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        /* code */
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        /* code */
        temp.push_back(arr[right]);  
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        /* code */
        arr[i]=temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    int mid=(low+high)/2;
    if(low>=high) return;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
    return 0;
}