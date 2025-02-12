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

// Sort a Linked List
Node* findMiddle(Node* head){
    Node* fast = head->next;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* mergeLists(Node* leftHead, Node* rightHead){
    Node* t1 = leftHead;
    Node* t2 = rightHead;
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
Node *sortLL(Node *head)
{
    // Write your code here.
	        if (head == NULL || head->next==NULL) return head;
        Node* middle = findMiddle(head);
        Node* leftHead = head;
        Node* rightHead = middle->next;
        middle->next = nullptr;
        leftHead = sortLL(leftHead);
        rightHead = sortLL(rightHead);
        return mergeLists(leftHead, rightHead);
}

int main(){
    vector<int> arr = {2, 5, 5, 2};
    Node* head = convertArr2Ll(arr);
    head = sortLL(head);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    // cout << isPalindrome(head);
    return 0;
}