#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// int i=1;
// void printn(int n){
//     if(i>n) return;
//     cout << i << endl;
//     i++;
//     printn(n);
// }
// int main(){
//     int n;
//     cin >> n;
//     printn(n);
// }

void printn(int i,int n){
    if(i<1) return;
    printn(i-1,n);
    cout << i << endl;
}

int main(){
    int i,n;
    cin >> n;
    i=n;
    printn(i,n);
}