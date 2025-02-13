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

Node* findTail(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    return temp;
}

// 	Find pairs with given sum in DLL
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int, int>> ans;
    Node* left = head;
    Node* right = findTail(head);
    while(left->data < right->data){
        if((left->data + right->data) == k){
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if((left->data + right->data)<k){
            left = left->next;
        }
        else right= right->prev;
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 4, 7, 4, 9};
    Node* head = constructDLL(arr);
    head = deleteAllOccurrences(head, 4);
    printdll(head);
}