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

// Delete all duplicates in DLL
Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        Node* nextNode = temp->next;
        while(nextNode!=NULL && nextNode->data==temp->data){
            Node* duplicate = nextNode;
            nextNode = nextNode->next;
            free(duplicate);
        }
        temp->next = nextNode;
        if(nextNode!=NULL) nextNode->prev = temp;
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr = {1, 4, 7, 4, 9};
    Node* head = constructDLL(arr);
    head = deleteAllOccurrences(head, 4);
    printdll(head);
}