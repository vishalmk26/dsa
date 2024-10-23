#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sSmallest(int arr[],int n){
    int smallest=arr[0];
    int secSmallest=-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]<smallest)
        {
            /* code */
            secSmallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i] > smallest && arr[i]<secSmallest)
        {
            /* code */
            secSmallest=arr[i];
        }
    }
    cout << secSmallest << endl;
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
    sSmallest(arr,n);
    return 0;
}