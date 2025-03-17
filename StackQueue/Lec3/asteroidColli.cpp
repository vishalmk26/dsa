#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Collision of asteroids : push back all the positive asteroids 
// and in case of negative asteroid, destroy the smaller sized asteroid
// by checking the top of the list.

    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ls;
        for(int i = 0; i<asteroids.size(); i++){
            if(asteroids[i]>0) ls.push_back(asteroids[i]);
            else{
                while(!ls.empty() and ls.back()>0 and ls.back()<abs(asteroids[i])) ls.pop_back();
                if(!ls.empty() and ls.back()==abs(asteroids[i])){
                    ls.pop_back();
                }
                else if(ls.empty() or ls.back()<0) ls.push_back(asteroids[i]);
            }
        }
        return ls;
    }

int main(){
    vector<int> arr = {5, 10, -5};
    vector<int> res = asteroidCollision(arr);
    cout << "Remaining asteroids are : " ;
    for(int i = 0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}