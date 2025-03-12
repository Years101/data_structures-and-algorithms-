#include <iostream>
#include <cassert>

// Include the C++ implementation files from different folders
#include "data_structures/stack/stack.cpp"
#include "data_structures/linked_list/linkedlist.cpp"
#include "data_structures/stack_with_linkedlist/2.cpp"

// Example test function for Stack
void test_stack_array() {
    stacks s;
    s.add(10);
    s.add(20);
    s.add(30);
    
    assert(s.delet() == 30);
    assert(s.delet() == 20);
    assert(s.delet() == 10);
    
    cout << "✅ Stack (Array) tests passed!" << endl;
}

// Test function for stack using linked list
void test_stack_linked_list() {
    stack s;
    s.append(1);
    s.append(2);
    s.append(3);
    
    s.displaytop(); // Should display 3
    cout << "\n✅ Stack (Linked List) tests passed!" << endl;
}

// Test function for linked list
void test_linked_list() {
    linked_list list;
    list.append(5);
    list.append(10);
    list.append(15);
    
    list.display(); // Expected: 5 -> 10 -> 15 -> none
    cout << "✅ Linked List tests passed!" << endl;
}

int main() {
    test_stack_array();
    test_stack_linked_list();
    test_linked_list();
    
    cout << "🎉 All tests passed successfully!" << endl;
    return 0;
}