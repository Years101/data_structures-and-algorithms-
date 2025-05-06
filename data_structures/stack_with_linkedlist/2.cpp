#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int v) {
        this->data = v;
        this->next = nullptr;
    }
};

class linkedlist {
public:
    node *head;
    linkedlist() {
        head = nullptr;
    }
};

class stack {
    linkedlist link;

public:
    void append(int data) {
        node* n = new node(data);
        n->next = link.head;
        link.head = n;
    }

    void displaytop() {
        if (link.head == nullptr) {
            cout << "stack is empty";
        } else {
            cout << link.head->data;
        }
    }

    void displayall() {
        if (link.head == nullptr) {
            cout << "stack is empty";
        } else {
            node* temp = link.head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }

    int pop() {
        if (link.head == nullptr) {
            cout << "stack is empty";
            return -1;
        } else {
            node* temp = link.head;
            int val = temp->data;
            link.head = link.head->next;
            delete temp;
            return val;
        }
    }
};

int main() {
    stack s;
    s.append(5);
    s.append(9);
    s.append(11);
    s.displayall();  
    s.pop();         
    cout << endl;
    s.displayall();  }
