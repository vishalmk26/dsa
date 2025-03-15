#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

    string postToPrefix(string exp) {
        // Write your code here
        int i = 0;
        stack<string> st;
        while(i<exp.length()){
            if(isalpha(exp[i]) or isdigit(exp[i])){
                string s(1,exp[i]);
                st.push(s);
            }
            else{
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string con = exp[i]+t2+t1;
                st.push(con);
            }
            i++;
        }
        return st.top();
    }

int main(){
    string s= "ABC/-AK/L-*";
    cout << "Postfix expression: " << s << endl;
    cout << "Prefix Expression: " << postToPrefix(s)<< endl;
    return 0;
}