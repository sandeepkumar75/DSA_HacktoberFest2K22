#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
public:
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int x){
        data = x;
        next = NULL;
    }
};

class linkedList{
public:
    Node *head, *tail;

    void create(int x){
        Node *newNode = new Node(x);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void update(Node* head, int x){
        Node* temp = head;
        bool flag = false;
        while(temp){
            if(temp->data == x){
                temp->data = x;
                flag = true;
                break;
            }
            temp = temp->next;
        }
        if(!flag)
            cout<<"The given value is not present in the list"<<endl;
    }
    void delete(Node* head, int x){
        Node *temp = head;
        if(temp->data == x){
            head = temp->next;
            return;
        }
        while(temp){

        }
    }

};
