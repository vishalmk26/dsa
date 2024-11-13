#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    int left=0, right=m-1, top=0, bottom=n-1;  
    vector<int> ans; 
    while (top<=bottom && left<=right)
    {
        /* code */
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }      
        top++;
        for (int i = top; i <= bottom; i++)
        {
            /* code */ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
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