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

Node* convertArr2Ll(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void printLL(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head){
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == nullptr) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = deleteTail(head);
    printLL(head);
    return 0;
}