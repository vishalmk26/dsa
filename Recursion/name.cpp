#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int i=1;
void name(int n,string s){
    if (i>n) return;
    cout << s << endl;
    i++;
    name(n,s);
}

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    name(n,s);
}