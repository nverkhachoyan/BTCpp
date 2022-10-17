//
// Created by Nver Khachoyan on 10/16/22.
//

#ifndef BTCCPP_NODE_H
#define BTCCPP_NODE_H

// Node used in Tree

template <class T>
class Node
{
private:
    T key;
    Node* parent = nullptr;
    Node* leftChild = nullptr;
    Node* rightChild = nullptr;
public:
    // constructor
    Node(T theKey);
    // setters
    void setLeftChild(Node* newNode);

    void setRightChild(Node* newNode);
    // getters
    Node* getParent();

    Node* getLeftChild();
    Node* getRightChild();
    T getKey();
};


#endif //BTCCPP_NODE_H
