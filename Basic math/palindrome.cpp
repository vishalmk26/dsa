#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int last,rev=0;
    int cp=n;
    while(n>0){
        last=n%10;
        n=n/10;
        rev=(rev*10)+last;
    }
    if(rev==cp) cout << "Palindrome!!!";
    else cout << "Not a palindrome";
}