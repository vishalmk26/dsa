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

// palindrome or not
Node* reverse(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp; 
        temp = front;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    // write your code here
    Node* slow = head;
        Node* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* rev = reverse(slow->next);
        Node* first = head;
        Node* second = rev;
        while(second!=NULL){
            if(first->data != second->data) {
                reverse(rev);
                return false;
            };
            first = first->next;
            second = second->next;
        }
        reverse(rev);
        return true;
}

int main(){
    vector<int> arr = {2, 5, 5, 2};
    Node* head = convertArr2Ll(arr);
    // head = findMiddle(head);
    // printLL(head);
    // int n = getCount(head);
    // cout << n;
    cout << isPalindrome(head);
    return 0;
}