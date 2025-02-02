#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// find the peak element in 2D matrix
int findMax(vector<vector<int>>& matrix, int n, int m, int col){
        int maxVal = -1;
        int index = -1;
        for(int i =0; i<n; i++){
            if(matrix[i][col]>maxVal){
                maxVal = matrix[i][col];
                index = i;
            }
        }
        return index;
    }

vector<int> findPeakGrid(vector<vector<int>> &mat){
    // Write your code here.   
    int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            int matIndex = findMax(mat, n , m, mid);
            int left = (mid-1 >= 0) ? mat[matIndex][mid-1] : -1;
            int right = (mid+1 < m) ? mat[matIndex][mid+1] : -1;
            if(mat[matIndex][mid]>left && mat[matIndex][mid]>right){
                return {matIndex, mid};
            }
            else if(mat[matIndex][mid]<left) high = mid-1;
            else low = mid+1;
        }
        return {-1, -1}; 
}