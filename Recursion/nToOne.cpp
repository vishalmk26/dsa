#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// void printn(int n){
//     if(n==0) return;
//     else cout << n << endl;
//     n--;
//     printn(n);
// }
// int main(){
//     int n;
//     cin >> n;
//     printn(n);
// }
void printn(int i,int n){
    if(i>n) return;
    printn(i+1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    printn(1,n);
}
