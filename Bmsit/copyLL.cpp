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

// Clone Linked List with Random and Next Pointer
Node* insertInBw(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        Node* newNode = new Node(temp->data);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
    return head;
}
Node* connectRandom(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        Node* copy = temp->next;
        if(temp->random) copy->random = temp->random->next;
        else copy->random = nullptr;
        temp = temp->next->next;
    }
    return head;
}
Node* getDeepCopy(Node* head){
    Node* dummy = new Node(-1);
    Node* res= dummy;
    Node* temp = head;
    while(temp!=NULL){
        res->next = temp->next;
        temp->next = temp->next->next;
        res = res->next;
        temp = temp->next;
    }
    return dummy->next;
}
Node *cloneLL(Node *head){
	// Write your code here
	        insertInBw(head);
        connectRandom(head);
        return getDeepCopy(head);
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    head = cloneLL(head);
    printLL(head);
    // int n = getCount(head);
    // cout << n;
    // cout <<  detectCycle(head);
    return 0;
}