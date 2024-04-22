#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int last,dup,sum=0;
    int count=log10(n)+1;
    dup=n;
    while(n>0){
        last=n%10;
        n=n/10;
        sum+=(int)pow(last,count);
    }
    if(dup==sum) cout <<"Yes";
    else cout << "No";
}