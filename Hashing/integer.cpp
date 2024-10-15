#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int hashh[10000000]; // no need to initialixze to zero as every global 
//variables are initialised to zero instead of garbage value
//an array can hold upto 10^7 numbers when declared gloablly
//and only upto 10^6 when declared inside the main.
int main(){
    int n,i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    //precompute
    for (i = 0; i < n; i++) // frequency array to find and store the number of times a number in the array has occured.
    {
        /* code */
        hashh[a[i]]+=1; // fror j=0, the frequency of a[0] in the hash array is incremented
        // and if another element is equal to a[0] is found, it is again incremented.
    }
    int q;
    cin >> q;
    //fetching 
    while (q--)
    { 
        /* code */
        int num;
        cin >> num;
        cout << hashh[num] << endl;
    }
    return 0;
}