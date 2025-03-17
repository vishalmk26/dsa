#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// remove k digits such that the resulting number is the least possible
string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i = 0; i<num.size(); i++){
            while(!st.empty() and k>0 and (st.top()-'0')>(num[i]-'0')){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string res= "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        while(res.size()!=0 and res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(), res.end());
        if(res.empty()) return "0";
        return res;
}

int main(){
    string s = "1432219";
    int k = 3;
    cout << "Original string : " << s <<endl;
    cout << "Modified string : " << removeKdigits(s,k);
    return 0;
}