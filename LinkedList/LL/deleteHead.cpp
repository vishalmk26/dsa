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

Node* deleteHead(Node* head){
    if (head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == nullptr) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node* deletek(Node* head,int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head; 
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteVal(Node* head,int val){
    if(head == NULL) return head;
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head; 
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2Ll(arr);
    // head = deletek(head, 7);
    head = deleteVal(head, 7);
    printLL(head);
    return 0;
}