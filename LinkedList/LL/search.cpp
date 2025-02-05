#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertLL2arr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

bool searchEl(Node* head, int val){
    while(head){
        if(head->data == val){
            return true;
        }
        head = head->next;
    }
    return false;
}

int main(){
    vector<int> arr = {2, 5, 7, 9};
    Node* head = convertLL2arr(arr);
    bool check = searchEl(head, 4);
    cout << check;
}