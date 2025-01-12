#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int floor(vector<int> arr, int x, int n){
    int low = 0, high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x){
            ans = arr[mid];
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}

int ceil(vector<int> arr, int x, int n){
    int low = 0, high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = arr[mid];
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main(){
    int n,x;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> x;
    // vector<int> arr = {10, 20, 30, 40, 50};
    // int n = 5, x = 25;
    int f = floor(arr,x,n);
    int c = ceil(arr,x,n);
    cout << "The floor is: " << f << " The ceil is: " << c;
    return 0;
}