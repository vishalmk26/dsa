#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
void print1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;  
    }
}
void print3(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << (j+1) << " ";
        }
        cout << endl;  
    }
}
void print4(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << (i+1) << " ";
        }
        cout << endl;  
    }
}
void print5(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=0;j<i;j++){
            cout <<"* ";
        }
        cout << endl;  
    }
}
void print6(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=0;j<i;j++){
            cout << j+1 <<" ";
        }
        cout << endl;  
    }
}
void print7(int n){
    int i,j,k,l;
    for(i=0;i<n;i++){
        //space
        for(j=0;j<n-i-1;j++){
            cout <<" ";
        }
        //stars
        for(k=0;k<2*i+1;k++){
            cout << "*";
        }
        //space
        for(l=0;l<=n-i-1;l++){
            cout<<" ";
        }
        cout << endl;  
    }
}
void print8(int n){
    int i,j;
    for(i=0;i<n;i++){
        //space
        for(j=0;j<i;j++){
            cout <<" ";
        }
        //stars
        for(j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        //space
        for(j=0;j<i;j++){
            cout<<" ";
        }
        cout << endl;  
    }
}
void print10(int n){
    int i,j;
    for(i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=(2*n-i);
        for(j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n){
    int i,j,start;
    for(i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(j=0;j<=i;j++){
            cout << start << " ";
            start=1 - start;
        }
        cout<< endl;
    }
}
int main(){
    // int x=10;
    // long y=15000;
    // long long z=10009203910;
    // cout << "The values pf x, y and z are : " << x << y << z;
    // float a=5.6;
    // double b=243.234;
    // cout << "A and b : " << a << " " << b;
    // string s;
    // getline(cin, s);
    // cout << s;
    int n,t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        print11(n);
    }
    // int n;
    // cin >> n;
    // print3(n);
    // return 0;
}