#ifndef NODE_H
#define NODE_H

class node {
public:
    int data;
    node *next;
    node(int v) : data(v), next(nullptr) {}
};

#endif
