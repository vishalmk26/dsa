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
    lenOfLongSubarr(arr,n,k);
    return 0;
}