#include <iostream>
using namespace std;

class stacks{
private :
int static const max_size = 1000;
int stack[max_size];
int top;

public :

stacks(){
top= -1;
}

void add(int data){
    if (top >= max_size-1){
        cout<<"stack is full"<<endl;
    }
    stack[++top]=data;

}

int delet(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    return stack[top--];
}
void display() {
    if (top == -1) {
        cout << "stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " -> ";
    }
    cout << "none" << endl;
}

};

