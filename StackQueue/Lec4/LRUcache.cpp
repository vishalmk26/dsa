#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// “Design a data structure that follows the constraints of Least Recently Used (LRU) cache”.
class LRUCache {
public:
    class node{
        public:
        int key;
        int val;
        node * prev;
        node* next;
        node(int _key, int _val){
            key = _key;
            val = _val;
        } 
    };
    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);
    int cap;
    unordered_map<int, node*> mpp;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void insertNode(node* newnode){
        node* temp = head->next;
        newnode->next = temp;
        head->next = newnode;
        newnode->prev = head;
        temp->prev = newnode;
    }

    void deleteNode(node* delnode){
        node* front = delnode->next;
        node* back = delnode->prev;
        back->next = front;
        front->prev = back;
    }

    int get(int key) {
        if(mpp.find(key) != mpp.end()){
            node* nod = mpp[key];
            deleteNode(nod);
            insertNode(nod);
            return nod->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            node* nod = mpp[key];
            nod->val = value;
            deleteNode(nod);
            insertNode(nod);
            mpp[key] = nod;
        }
        else{
            if(mpp.size() == cap){
                node* nod = tail->prev;
                mpp.erase(nod->key);
                deleteNode(nod);
            }
            node* newnode = new node(key, value);
            insertNode(newnode);
            mpp[key] = newnode;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */