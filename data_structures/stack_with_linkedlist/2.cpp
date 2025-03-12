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
    }};


class stack {
linkedlist link;
public :
    void append (int data){
        node* n = new node(data);
        n->next = link.head;
        link.head = n;
    }
    void displaytop (){
        if(link.head== nullptr ){
            cout<<"stack is empty";

        }
        else {
            cout<<link.head->data;
        }
    }

};


int main(){
stack s;
s.append(1);
s.append(10);
s.append(123);
s.append(0);
s.displaytop();



}