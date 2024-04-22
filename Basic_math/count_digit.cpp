#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int last,count=0;
    while(n>0){
        last=n%10;
        n=n/10;
        count++;
    }
    //int count= (int) (log10(n)+1)
    //cout<< count;
    cout << count;
}