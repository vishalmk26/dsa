#include<iostream>
#include<vector>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int i=0;
    for (int j = 0; j < n; i++)
    {
        /* code */
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; i++)
    {
        /* code */
        cout << arr[j] << endl;
    }
    
    return 0;
}