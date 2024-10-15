#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

void printn(int i,int n, string x){
    if (i>n) return;
    printn(i+1,n,x);
    cout << x << endl;
}

int main(){
    int n;
    cin >> n;
    string x;
    cin >> x;
    printn(1,n,x);
} 