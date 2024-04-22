#include <vector>
#include<set>
#include <algorithm>
#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0) cout << i << " ";
//         else continue;
//     }
// }

int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            st.insert(i);
            if(n/i!=0) st.insert(n/i);
        }
    }
    for(auto it : st){
        cout << it << " ";
    }
}