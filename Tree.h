//
// Created by Nver Khachoyan on 10/16/22.
//

#ifndef BTCCPP_TREE_H
#define BTCCPP_TREE_H

#include "Node.h"
#include <iostream>

// Tree
template <class T>
class Tree
{
private:
    Node <T> * root = nullptr;
public:
    // setters
    bool insert(Node <T> * curr, Node <T> * newNode)
    {
        if(this->root == nullptr)
        {
            this->root = newNode;
            return true;
        }

        if(curr->getKey() > newNode->getKey())
        {
            if(curr->getLeftChild() == nullptr)
            {
                curr->setLeftChild(newNode);
                return true;
            }
            else
            {
                insert(curr->getLeftChild(), newNode);
            }
        }
        else {
            if(curr->getRightChild() == nullptr)
            {
                curr->setRightChild(newNode);
                return true;
            }
            else {
                insert(curr->getRightChild(), newNode);
            }
        }
        return false;
    }

    // getters

    Node <T> * getRoot()
    {
        return this->root;
    }

    void printTree(Node <T> * curr)
    {
        if(curr != nullptr){
            printTree(curr->getLeftChild());
            std::cout << curr->getKey() << " ";
            printTree(curr->getRightChild());
        }
    }

};


#endif //BTCCPP_TREE_H
