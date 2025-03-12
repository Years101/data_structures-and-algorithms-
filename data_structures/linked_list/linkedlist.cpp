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

class linked {
public:
    node *head;
    
    linked () {
        head = nullptr;
    }

    void app(int data) {
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

    void dis() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "none" << endl;
    }
};

int main() {
    linked c;
    c.app(11);
    c.app(7);
    c.dis();
    return 0;
}
