#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
void reverse(int i,int arr[],int n){
    if (i==n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    reverse(0,a,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << endl;
    }
    
    return 0;
}