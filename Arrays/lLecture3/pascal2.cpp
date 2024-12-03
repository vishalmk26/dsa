#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> generateRows(int row){
        long long ans =1;
        vector<int> ansRows;
        for(int col=1;col<row;col++){
            ans= ans * (row - col);
            ans = ans / col;
        }
        return ansRows;
    }    

    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=1;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }

int main()
{
    int n = 5;
    vector<vector<int>> ans = generate(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
