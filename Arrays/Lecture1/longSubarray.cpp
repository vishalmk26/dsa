#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

// BETTR SOLUTION
// int lenOfLongSubarr(vector<int> A,  int N, long long K) { 
//         // Complete the function
//         map<long long, int> preSumMap;
//         long long sum=0;
//         int maxLen=0;
//         for(int i=0;i<A.size();i++){
//             sum=sum+A[i];
//             if (sum==K){
//                 maxLen=max(maxLen,i+1);
//             }
//             long long rem=sum-K;
//             if (preSumMap.find(rem)!= preSumMap.end())
//             {
//                 /* code */
//                 int len=i - preSumMap[rem];
//                 maxLen=max(maxLen,len);

//             }
//             if (preSumMap.find(sum)==preSumMap.end())
//             {
//                 /* code */preSumMap[sum]=i;
//             }
//         }
//         return maxLen;  
// } 

// optimal solution
int longestSubarrayWithSumk(vector<int> a, long long k){
    int left=0, right=0;
    long long sum=a[0];
    int maxLen=0;
    int n=a.size();
    while (right<n)
    {
        /* code */
        while (left<=right && sum>k)
        {
            /* code */
            sum-=a[left];
            left++;
        }
        if (sum==k)
        {
            /* code */
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if (right<n)
        {
            /* code */
            sum=sum+a[right];
        }
        return maxLen;
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    long long k;
    cin >> k;
    longestSubarrayWithSumk(arr,k);
    return 0;
}