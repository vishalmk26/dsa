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

int main() {
  vector < int > arr;
  arr = {2,1,5,6,2,3};
  cout << "The largest rectangle area is : " << largestRectangleArea(arr) << endl;
}