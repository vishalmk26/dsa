#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printn(int i, int n){
    if(i>n) return;
    printn(i+1,n);
    cout << i << endl;
}

int main(){
    int n,i=1;
    cin >> n;
    printn(i,n);
}