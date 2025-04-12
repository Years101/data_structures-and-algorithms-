#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int v) {
        data = v;
        next = nullptr;
    }
};

class linked {
private:
    node *head;

public:
    linked() {
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
    node* createnode() {
        int x;
        cout << "Enter a value for the node: ";
        cin >> x;
        node* newnode = new node(x);
    
        if (!head) {
            head = newnode;
        } else {
            node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    
        return newnode;
    }
    
    void dis() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "none" << endl;
    }

    void addbegin(int data) {
        node* newNode = new node(data);
        newNode->next = head;
        head = newNode;
    }

    void displayat(int num) {
        node *temp = head;
        for (int i = 0; i < num - 1; i++) {
            if (!temp) {
                cout << "Out of bounds!" << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp)
            cout << temp->data;
        else
            cout << "Out of bounds!";
    }

    node* findnode(int pos) {
        node* temp = head;
        int count = 1;
        while (temp && count < pos) {
            temp = temp->next;
            count++;
        }
        return temp;
    }

    void insertAfter(node* target) {
        if (!target) {
            cout << "Target node not found!" << endl;
            return;
        }
    
        int x;
        cout << "Enter a value to insert after " << target->data << ": ";
        cin >> x;
    
        node* newNode = new node(x);
        newNode->next = target->next;
        target->next = newNode;
    }
    

    void deletelastnode() {
        if (head == NULL) 
        return;
        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }
        node* temp = head;
        while (temp->next->next) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deletefirstnode() {
        if (head == NULL) 
        return;
        node* temp = head;
        head = head->next;
        delete temp;
    }

    void deletenode(node* r) {
        if (head == NULL) 
        return;
        if (r == head) {
            deletefirstnode();
        } else if (!r->next) {
            deletelastnode();
        } else {
            node* temp = head;
            while (temp && temp->next != r) {
                temp = temp->next;
            }
            if (temp) {
                temp->next = r->next;
                delete r;
            }
        }
    }

    node* getbyorder(int order) {
        node* temp = head;
        int count = 1;
        while (temp && count < order) {
            temp = temp->next;
            count++;
        }
        return temp;
    }

    void deletebyorder(int order) {
        node* target = getbyorder(order);
        if (target)
            deletenode(target);
    }

    void deleteall() {
        node* temp = head;
        while (temp) {
            node* next = temp->next;
            delete temp;
            temp = next;
        }
        head = nullptr;
    }
};

int main() {
    linked myList;

    for(int i = 0; i < 5; i++) {
        node* n = myList.createnode();
    }

myList.dis();
myList.deletefirstnode();
myList.deletelastnode();
myList.deletebyorder(2);
myList.dis();
myList.insertAfter(myList.getbyorder(2));
myList.dis();
myList.deleteall();
myList.dis();
return 0;
}
