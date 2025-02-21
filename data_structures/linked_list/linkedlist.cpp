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
    node *head;
public:
    linked_list() {
        head = nullptr;
    }

    // Appending 
    void append(int data) {
        node* n = new node(data);

        if (!head) {
            head = n;
            return;
        }
        node* traverse = head;
        while (traverse->next) {
            traverse = traverse->next;
        }
        traverse->next = n;
    }

    // cout
    void view() {
        node* v = head;
        while (v) {  
            cout << v->data << "-" ;
            v = v->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    linked_list l;
    l.append(11);
    l.append(7);
    l.view();  
}
