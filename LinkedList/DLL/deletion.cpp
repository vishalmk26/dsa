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

Node * deleteHead(Node *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL) return NULL;
    Node* prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;
    free(prev);
    return head;
}

Node* deleteTail(Node* head){
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->prev;
    prev->next = nullptr;
    tail->prev = nullptr;
    free(tail);
    return head;
}

Node* deletexNode(Node* head, int x) {
    // Your code here
    if(head == NULL) return head;
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == x) break;
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* front = temp->next;
    if(back == NULL && front == NULL){
        free(temp);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    else if(back == NULL){
        return deleteHead(head);
    }
    else{
        back->next = front;
        front->prev = back;
        temp->next = nullptr;
        temp->prev = nullptr;
        free(temp);
    }
    return head;
}

void deleteNode(Node* node) {
    //Write your code here.
    Node* back = node->prev;
    Node* front = node->next;
    if(front == NULL){
        back->next = nullptr;
        node->prev = nullptr;
        free(node);
        return;
    }
    back->next = front;
    front->prev = back;
    node->next = nullptr;
    node->prev = nullptr;
    free(node);
}

int main(){
    vector<int> arr = {1, 4, 7, 9};
    Node* head = constructDLL(arr);
    head = deleteNode(head, 3);
    printdll(head);
}