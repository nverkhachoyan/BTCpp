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
    bool insert(Node <T> * curr, Node <T> * newNode);

    // getters

    Node <T> * getRoot();

    void printTree(Node <T> * curr);

};


#endif //BTCCPP_TREE_H
