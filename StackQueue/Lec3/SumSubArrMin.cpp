#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> nse(vector<int> arr){
            int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for(int i = n-1; i>=0; i--){
        while(!st.empty() and arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i] = n;
        else ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
    vector<int> psee(vector<int> arr){
        stack<int> st;
        vector<int> ans(arr.size(), -1);
        for(int i = 0; i<arr.size(); i++){
            while(!st.empty() and arr[st.top()]>arr[i]){ 
                st.pop();
            }
            if(!st.empty()) ans[i] = st.top();
            else ans[i] = -1;
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> ns = nse(arr);
        vector<int> pse = psee(arr);
        long long mod = 1e9+7;
        int total = 0;
        for(int i = 0; i<arr.size(); i++){
            int left = i - pse[i];
            int right = ns[i] - i;
            total =(total + (left*right*1LL*arr[i]) % mod) % mod; 
        }
        return total;
    }

    int main(){
    vector<int> arr = {3, 1, 2, 4};
    cout << "Sum of the minimums in each subarray is : " << sumSubarrayMins(arr) << endl;
    return 0;
}