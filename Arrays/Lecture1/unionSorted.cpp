#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Union(vector<int> a,vector<int> b,int n1,int n2){
    int i=0;
    int j=0;
    vector<int> Unionarr;
    while (i<n1 && j<n2)
    {
        /* code */
        if (a[i]<=b[j])
        {
            /* code */
            if (Unionarr.size()==0 || Unionarr.back()!=a[i])
            {
                /* code */
                Unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if (Unionarr.size()==0 || Unionarr.back()!=b[j])
            {
                /* code */
                Unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while (i<n1)
    {
        /* code */
        if (Unionarr.size()==0 || Unionarr.back()!=a[i])
        {
            /* code */
            Unionarr.push_back(a[i]);
        }
        i++;
    }
    while (j<n2)
    {
        /* code */
        if (Unionarr.size()==0 || Unionarr.back()!=b[j])
        {
            /* code */
            Unionarr.push_back(b[j]);
        }
        j++;
    }
    for (int i = 0; i < Unionarr.size(); i++)
    {
        /* code */
        cout << Unionarr[i] << endl;
    }
       
}

int main(){
    int n1,n2;
    cin >> n1;
    cin >> n2;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0; i < n1; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        cin >> b[i];
    }   
    Union(a,b,n1,n2);
    return 0;
}