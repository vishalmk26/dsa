#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int lSearch(int arr[],int n,int num){
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]==num)
        {
            /* code */
            return i;
        } 
    }
    return -1;
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
    int num;
    cin >> num;
    cout << lSearch(arr,n,num);
    return 0;
}