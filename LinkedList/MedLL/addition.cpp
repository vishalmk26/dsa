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

// Add two numbers represented as Linked Lists
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
            Node* dummy = new Node(-1);
        Node* cur = dummy;
        Node* t1 = num1;
        Node* t2 = num2;
        int carry =0;
        while(t1!=NULL || t2!=NULL){
            int sum = carry;
            if(t1) sum = sum+t1->data;
            if(t2) sum = sum+t2->data;
            Node* newN = new Node(sum%10);
            carry = sum/10;

            cur->next = newN;
            cur = cur->next;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }
        if(carry){
            Node* n = new Node(carry);
            cur->next = n;
            cur = cur->next;
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