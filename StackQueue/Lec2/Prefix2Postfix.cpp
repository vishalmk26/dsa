#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

    string prefixToPostfix(string exp) {
        // Write your code here
        int i = (exp.length()-1);
        stack<string> st;
        while(i>=0){
            if(isalpha(exp[i]) or isdigit(exp[i])){
                string s(1,exp[i]);
                st.push(s);
            }
            else{
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string con = t1+t2+exp[i];
                st.push(con);
            }
            i--;
        }
        return st.top();
    }

int main(){
    string s= "*-A/BC-/AKL";
    cout << "Prefix expression: " << s << endl;
    cout << "Postfix Expression: " << prefixToPostfix(s) << endl;
    return 0;
}