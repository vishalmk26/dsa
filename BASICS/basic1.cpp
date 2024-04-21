#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

void print14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
// void print15(int n){
//     for(int i=n;i>=1;i--){
//         for(char ch='A';ch<'A'+i;ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<=(n-i-1);j++){
            cout << " ";
        }
        //alphabets
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout << ch ;
            if (j>=breakpoint) ch--;
            else ch++; 
        }
        //scpace
        for(int j=0;j<=(n-i-1);j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << endl; 
    }
}
// void print19(int n){
//     int space=0;
//     for(int i=0;i<n;i++){
//         //stars
//         for(int j=0;j<n-i;j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0;j<space;j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=0;j<n-i;j++){
//             cout << "*";
//         }
//         cout << endl;
//         space+=2;
//     }
// }
void print19(int n){
    
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
        
    }
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        //space
        for(int j=1;j<=(n-i)*2;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout<< endl;
    }
}
void print20(int n){
    int space=2*n;
    for(int i=1;i<=2*n-1;i++){
        
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        //space
        if(i>n) space+=2;
        else space-=2;
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        print21(n);
    }
    return 0;
}