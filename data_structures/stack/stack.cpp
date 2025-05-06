#include <iostream>
using namespace std;

class stacks {
private:
    static const int max_size = 1000;
    int stack[max_size];
    int top;

public:
    stacks() {
        top = -1;
    }

    void add(int data) {
        if (top >= max_size - 1) {
            cout << "stack is full" << endl;
            return;
        }
        stack[++top] = data;
    }

    int pop() {
        if (top == -1) {
            cout << "stack is empty" << endl;
            return -1;
        }
        return stack[top--];
    }

    void display() {
        if (top == -1) {
            cout << "stack is empty" << endl;
            return;
        }

        int total = top + 1;
        int toDrop = total > 10 ? total - 10 : 0;

        for (int i = 0; i < toDrop; i++) {
            pop();
        }

        while (top != -1) {
            cout << pop() << endl;
        }
    }

    void insertAfter(int data, int position) {
        if (position < 0 || position > top) {
            cout << "Invalid position. Current stack size: " << top + 1 << endl;
            return;
        }
        if (top >= max_size - 1) {
            cout << "stack is full" << endl;
            return;
        }
        for (int i = top; i > position; --i) {
            stack[i + 1] = stack[i];
        }
        stack[position + 1] = data;
        top++;
    }
};

int main() {
    stacks s;
    for (int i = 1; i <= 20; i++) {
        s.add(i);
    }
    s.insertAfter(999, 4);
    s.display();
    return 0;
}
