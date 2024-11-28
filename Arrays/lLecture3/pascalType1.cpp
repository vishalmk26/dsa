#include<iostream>
#include<vector>
#include<algorithm>

// using namespace std;

// // // given row and col we have to find the element at the place
// // // n=r, r=c
// int pascal(int n,int r){
//     int res =1;
//     for (int i = 0; i < r; i++)
//     {
//         /* code */
//         res= res * (n-i);
//         res = res / (i+1);
//     }
//     return res;
// }

// //to print entire row
// // int pascal(int r){
// //     int ans=1;
// //     cout << ans;
// //     for (int i = 1; i < r; i++)
// //     {
// //         /* code */
// //         ans= ans*(r-i);
// //         ans=ans/i;
// //         cout << " " << ans;
// //     }
    
// // }

// int main(){
//     int r,c;
//     cin >> r;
//     cin >> c;

//     // //to print entire row

//     // for(c=1 ;c<=r;c++){
//     //     //to print an element at any position
//     //     cout << pascal(r-1,c-1) << " "; //main step : r-1, c-1
//     // }
//     // pascal(r);
//     vector<vector<int>> ans;
//     for (int i = 1; i <=r; i++)
//     {
//         /* code */
//         vector<int> temp;
//         for (int j = 1; i <= r; i++)
//         {
//             /* code */
//             temp.push_back(pascal(r-1,c-1));
//         }
//         ans.push_back(temp);
//     }
//     for(auto it:ans){
//         for(auto i: it){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
