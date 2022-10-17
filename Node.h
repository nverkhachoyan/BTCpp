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
    Node(T theKey)
    {
        this->key = theKey;
    }
    // setters
    void setLeftChild(Node* newNode)
    {
        this->leftChild = newNode;
    }

    void setRightChild(Node* newNode)
    {
        this->rightChild = newNode;
    }
    // getters
    Node* getParent()
    {
        return this->parent;
    }
    Node* getLeftChild()
    {
        return this->leftChild;
    }
    Node* getRightChild()
    {
        return this->rightChild;
    }
    T getKey()
    {
        return this->key;
    }
};


#endif //BTCCPP_NODE_H
