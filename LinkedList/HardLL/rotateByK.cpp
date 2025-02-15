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

// Rotate a Linked List
Node* findkthNode(Node* head, int k){
    k-=1;
    while(head!=NULL && k>0){
        k--;
        head = head->next;
    }
    return head;
}
Node *rotate(Node *head, int k) {
     // Write your code here.        
     if(head == NULL || head->next == NULL) return head;
        int len = 1;
        Node* tail = head;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        if(k%len == 0) return head;
        k = k%len;
        Node* newLast = findkthNode(head, len-k);
        tail->next = head;
        head = newLast->next;
        newLast->next = nullptr;
        return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = rotate(head,2);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    // cout <<  detectCycle(head);
    return 0;
}