#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> Intersection;
vector<int> intersection(vector<int> a,vector<int> b,int n1,int n2){
    int i=0;
    int j=0;
    
    vector<int> visited;
    while (i<n1 && j<n2)
    {
        /* code */
        if (a[i]<b[j])
        {
            /* code */
            i++;
        }
        else if (b[j]<a[i])
        {
            /* code */
            j++;
        }
        else
        {
            /* code */
            Intersection.push_back(a[i]);
            i++;
            j++;
        }
        
    }
    return Intersection;
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
    intersection(a,b,n1,n2);
    for (int i = 0; i < Intersection.size(); i++)
    {
        /* code */
        cout << Intersection[i] << endl;
    }
    
    return 0;
}