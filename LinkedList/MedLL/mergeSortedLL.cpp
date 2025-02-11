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

Node* sortTwoLists(Node* first, Node* second)
{
    // Write your code here.
        Node* t1 = first;
    Node* t2 = second;
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    while(t1!=NULL && t2!=NULL){
        if(t1->data < t2->data){
            temp->next = t1;
            t1 = t1->next;
            temp = temp->next;
        }
        else{
            temp->next = t2;
            t2 = t2->next;
            temp = temp->next;
        }
    }
    if(t1 == NULL){
        temp->next = t2;
    }
    if(t2 == NULL){
        temp->next = t1;
    }
    return dummy->next;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = sortTwoLists(head);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    // cout <<  detectCycle(head);
    return 0;
}