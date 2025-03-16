#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> prevSmallerEl(vector<int> arr){
    stack<int> st;
    vector<int> ans(arr.size(), -1);
    for(int i = 0; i<arr.size(); i++){
        while(!st.empty() and st.top()>=arr[i]){
            st.pop();
        }
        if(!st.empty()) ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr = {4, 5, 2, 10, 8};
    cout << "Previous Smaller Elements are: " << endl;
    vector<int> res = prevSmallerEl(arr);
    for(int i = 0;i<arr.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}