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

// Find intersection of Two Linked Lists
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
            Node* temp1 = firstHead;
        Node* temp2 = secondHead;
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1 == temp2) return temp1;

            if(temp1 == NULL){
                temp1 = secondHead;
            }
            if(temp2==NULL){
                temp2 = firstHead;
            }

        }
        return temp1;
}}

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