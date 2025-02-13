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

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    if(head == NULL) return head;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == k){
            if(temp == head){
                head = head->next;
            }
            Node* nextNode = temp->next;
            Node* prevNode = temp->prev;
            if(nextNode) nextNode->prev = prevNode;
            if(prevNode) prevNode->next = nextNode;
            free(temp);
            temp = nextNode;

        }
        else{
            temp = temp->next;
        }
    }
    return head;
}


int main(){
    vector<int> arr = {1, 4, 7, 4, 9};
    Node* head = constructDLL(arr);
    head = deleteAllOccurrences(head, 4);
    printdll(head);
}