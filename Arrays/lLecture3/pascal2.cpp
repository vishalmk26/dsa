#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// #include <bits/stdc++.h>
// using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
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


// vector<int> generateRows(int row){
//         long long ans =1;
//         vector<int> ansRows;
//         for(int col=1;col<row;col++){
//             ans= ans * (row - col);
//             ans = ans / col;
//         }
//         return ansRows;
//     }    

//     vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> ans;
//        for(int i=1;i<=numRows;i++){
//             ans.push_back(generateRows(i));
//         }
//         return ans;
//     }

// int main()
// {
//     int n = 5;
//     vector<vector<int>> ans = generate(n);
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
