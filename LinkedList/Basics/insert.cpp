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

// count the number of elements
int getCount(Node* head) {
    // Code here
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Insert at the head of a Linked List
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}

Node* insertLast(Node* head, int val){
    if(head == NULL) return new Node(val); 
    Node* temp = head;
    Node* last = new Node(val);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = last;
    return head;
}

Node* insertk(Node* head, int val, int k){
    if(head == NULL){
        if(k == 1) return new Node(val);
        else return NULL;
    }
    if(k == 1){
        Node* x = new Node(val, head);
        return x;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeVal(Node* head, int el, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(el, head);
    }
    Node* temp = head;
    while(temp->next !=NULL){
        if(temp->next->data == val){
            Node* newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = insertBeforeVal(head, 4, 8);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    return 0;
}