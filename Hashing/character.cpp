#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
int hashh[256];

int  main(){
    string s;
    cin >> s;
    int q;
    cin >> q;
    //pre compute 
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        hashh[s[i]]++;

    }
    
    while (q--)
    {
        /* code */
        char c;
        cin >> c;
        //fetching
        cout << hashh[c] << endl;
    }
    return 0;
    
}

// FOR LOWER CASE STRING

// int hashh[26];
// int main(){
//     string s;
//     cin >> s;
//     int q;
//     cin >> q;

//     for(int i=0;i<s.size();i++){
//         hashh[s[i]-'a']+=1;
//     }

//     while(q--){
//         char c;
//         cin>> c;
//         cout << hashh[c-'a'] << endl;
//     }
//     return 0;
// }