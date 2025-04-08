#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i=0; i<n; i++){
        cin >> words[i];
    }
    for(int i=0; i<n; i++){
        if(words[i].length > 10){
            cout << words[i].charAt(0) << words[i].length-2 << words[i].charAt(words[i].length-1);
        }
        else cout << words[i];
    }
    return 0;
}