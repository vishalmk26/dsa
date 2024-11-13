#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    // transpose
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse the rows
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    int n,m;
    cin >> n;
    cin >> m;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }
    return 0;
}