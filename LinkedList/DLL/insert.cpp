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

Node* constructDLL(vector<int>& arr) {
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

void printdll(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertAtFront(Node *head, int k) {
    // Write your code here.
    Node* newHead = new Node(k);
    if(head == NULL) return newHead;
    newHead->next = head;
    newHead->prev = nullptr;
    head->prev = newHead;
    return newHead;
}

Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* temp = head;
    Node* newNode = new Node(k,temp,nullptr);
    if(head == NULL) return newNode;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

Node* insertBeforeTail(Node* head, int k){
    Node* newNode = new Node(k);
    if(head == NULL) return newNode;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* front = temp->next;
    temp->next = newNode;
    front->prev = newNode;
    newNode->next = front;
    newNode->prev = temp;
    return head;
}

Node* insertBeforek(Node* head, int val, int k){
    Node* temp = head;
    int cnt = 0;
    Node* newNode = new Node(val);
    if(head == NULL) return newNode;
    if(k ==1) return insertAtFront(head, val);
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1 ) break;
        temp = temp->next;
    }
    Node* front = temp->next;
    temp->next = newNode;
    front->prev = newNode;
    newNode->next = front;
    newNode->prev = temp;
    return head;
}

int main(){
    vector<int> arr = {1, 4, 7, 9};
    Node* head = constructDLL(arr);
    head = insertBeforek(head, 3, 1);
    printdll(head);
}