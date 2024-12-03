#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

// >n/3. similar problem in lecture 2.
// better solution
// void majority(vector<int> arr,int n){
//     vector<int> ls;
//     map<int,int> mpp;
//     int min = (int) (n/3)+1;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         mpp[arr[i]]++;
//         if(mpp[arr[i]] == min){
//             ls.push_back(arr[i]);
//         }
//         if(ls.size()==2) break;
//     }
//     for (int i = 0; i < ls.size(); i++)
//     {
//         /* code */
//         cout << ls[i] << endl;
//     } 
// }

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    majority(arr,n);
    
    return 0;
}