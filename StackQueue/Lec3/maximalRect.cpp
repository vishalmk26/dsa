#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// area of largest rectangle in the histogram
int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0, nse, pse;
        int element;
        for(int i = 0; i<heights.size(); i++){
            while(!st.empty() and heights[st.top()]>heights[i]){
                element = st.top();
                st.pop();
                nse = i;
                pse = st.empty()? -1 : st.top();
                maxArea = max(maxArea, heights[element]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            element = st.top();
            st.pop();
            nse = heights.size();
            pse = st.empty()?-1 : st.top();
            maxArea = max(maxArea, heights[element]*(nse-pse-1));
        }
        return maxArea;
    }
int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(); //4
        int m = matrix[0].size(); //5
        int maxi=0;
        vector<vector<int>> psum(n, vector<int>(m, 0));
        for(int j=0; j<m; j++){
            int sum = 0;
            for(int i=0; i<n; i++){
                // sum += matrix[i][j]-'0';
                // if((matrix[i][j]-'0')==0) sum = 0;
                if(matrix[i][j]=='1') sum++;
                else sum = 0;
                psum[i][j] = sum;
            }
        }
        for(int i = 0; i<n; i++){
            maxi = max(maxi, largestRectangleArea(psum[i])); 
        }
        return maxi;
    }

int main() {
  vector<vector<char>> arr = {{"1","0","1","0","0"},{"1","0","1","1","1"},{"1","1","1","1","1"},{"1","0","0","1","0"}};
  cout << "The largest rectangle area is : " << maximalRectangle(arr) << endl;
}