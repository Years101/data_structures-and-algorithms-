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

class linked_list {
public:
    node *head;
    
    linked_list() {
        head = nullptr;
    }

    void append(int data) {
        node* newNode = new node(data);
        if (!head) {
            head = newNode;
            return;
        }
        node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "none" << endl;
    }
};

int main() {
    linked_list l;
    l.append(11);
    l.append(7);
    l.display();
    return 0;
}
