#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// // CIRCULAR ARRAY:
// vector<int> nextGreaterElements(vector<int>& arr){
//     int n = arr.size();
//     vector<int> ans(n, -1);
//     stack<int> st;
//     for(int i = 2*n-1; i>=0; i--){
//         while(!st.empty() and st.top()<=arr[i%n]){
//             st.pop();
//         }
//         if(i<n) if(!st.empty()) ans[i] = st.top();
//         st.push(arr[i%n]);
//     }
//     return ans;
// }

// NON CIRCULAR ARRAY:
vector<int> nextGreaterElements(vector<int>& arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for(int i = n-1; i>=0; i--){
        while(!st.empty() and st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main() {
  vector < int > v = {5,7,1,2,6,0};
  vector < int > res = nextGreaterElements(v);
  cout << "The next smaller elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  return 0;
}