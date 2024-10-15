#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printn(int i, int n){
    if(i==0) return;
    printn(i-1,n);
    cout << i << endl;
}

int main(){
    int n,i;
    cin >> n;
    i=n;
    printn(i,n);
}