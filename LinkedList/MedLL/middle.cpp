#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* convertArr2Ll(vector<int>& arr) {
    // Write your code here
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

void printLL(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}

Node *findMiddle(Node *head) {
    // Write your code here
    if(head == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = findMiddle(head);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    return 0;
}