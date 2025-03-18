#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n = mat.size();
        int top = 0, bottom = n-1;
        while(top<bottom){
            if(mat[top][bottom] == 1) top +=1;
            else if(mat[bottom][top]==1) bottom -= 1;
            else{
                top++;
                bottom--;
            }
        }
        for(int i = 0; i<n; i++){
            if(i == top) continue;
            if(mat[top][i] == 0 and mat[i][top] == 1) ;
            else return -1;
        }
        return top;
    }
};

int main(){
    Solution* obj = new Solution();
    vector<vector<int>> mat = {{1, 1, 0}, {0, 1, 0}, {0, 1, 1}}; //{{1, 1}, { 1, 1}}
    cout << obj->celebrity(mat);
    return 0;
}