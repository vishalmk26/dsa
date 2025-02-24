#include<algorithm>
#include<iostream>
#include<vector>
#include<Stack>

using namespace std;

class MyStack {
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int s = q.size();
        q.push(x);
        for(int i = 0; i<s; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int n = q.front();
        q.pop();
        return n;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()) return false;
        return true;
    }
};

int main() {
  MyStack s;
  s.push(3);
  s.push(2);
  s.push(4);
  s.push(1);
  cout << "Top of the stack: " << s.top() << endl;
//   cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.pop() << endl;
  cout << "Top of the stack after removing element: " << s.top() << endl;
//   cout << "Size of the stack after removing element: " << s.Size();
  return 0;
}


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */