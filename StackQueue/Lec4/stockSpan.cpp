#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st;
    int ind;
    StockSpanner() {
        ind = -1;
    }
    
    int next(int price) {
        ind++;
        while(!st.empty() and st.top().first<=price) st.pop(); //this gives the previous greater element at the top of the stack
        int ans = ind - (st.empty()? -1:st.top().second);
        st.push({price,ind});
        return ans;
    }
};

int main(){
    StockSpanner* obj = new StockSpanner();
    int ne = obj->next(7);
    int n = obj->next(8);
    cout << n << " ";
    return 0;
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */