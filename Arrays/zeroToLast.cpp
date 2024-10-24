#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void zeros(int arr[],int n){
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]==0)
        {
            /* code */
            j=i;
            break;
        }
    }
    if (j==-1)
    {
        /* code */
        return;
    }
    
    for (int i = j+1; i < n; i++)
    {
        /* code */
        if (arr[i]!=0)
        {
            /* code */
            swap(arr[i],arr[j]);
            j++;
        }
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
    zeros(arr,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
    return 0;
}