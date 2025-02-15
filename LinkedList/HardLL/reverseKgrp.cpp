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
// Reverse LL in group of given size K
Node* reverse(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return temp;
}
Node* kThNode(Node* temp, int k){
    k--;
    while(temp!=NULL && k>0){
        k--;
        temp = temp->next;
    }
    return temp;
}
Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        Node* kTh = kThNode(temp,k);
        if(kTh == NULL){
            if(prev) prev->next = temp;
            break;
        }
        Node* front = kTh->next;
        kTh->next = nullptr;
        reverse(temp);
        if(temp == head) head = kTh;
        else{
            prev->next = kTh;
        }
        prev = temp;
        temp = front;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = kReverse(head,2);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    // cout <<  detectCycle(head);
    return 0;
}