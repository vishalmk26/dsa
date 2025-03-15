#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

    string postToInfix(string exp) {
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
                string con = '('+t2+exp[i]+t1+')';
                st.push(con);
            }
            i++;
        }
        return st.top();
    }

int main(){
    string s= "ab*c+";
    cout << "Postfix expression: " << s << endl;
    cout << "Infix Expression: " << postToInfix(s)<< endl;
    return 0;
}