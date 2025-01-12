#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
		int ans = n;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] > x){
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	return ans;	
}
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int ans = n;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] >= x){
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lb= lowerBound(arr,n,k);
    if(lb==n || arr[lb]!=k) return {-1,-1};
    return {lb, upperBound(arr, k, n)-1};
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
    // cout << "The first and last occurance is: " << firstAndLastPosition(arr,n,x);
    // int lb= lowerBound(arr,n,k);
    // if(lb==n || arr[lb]!=k) return {-1,-1};
    pair<int,int> ans = firstAndLastPosition(arr,n,x);
    cout << "The first and last occurance is: " << ans.first <<" "<< ans.second;
    return 0;
}