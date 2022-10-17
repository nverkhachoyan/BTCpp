//
// Created by Nver Khachoyan on 10/16/22.
//

#include "Tree.h"

// setters

template <class T>
bool Tree<T>::insert(Node <T> * curr, Node <T> * newNode)
{
    // if(curr == nullptr)
    // {
    //     std::cout << "INSIDE insert curr is nullptr when key is " << newNode->getKey();
    // }

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
    else
    {
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

template <class T>
Node <T> * Tree<T>::getRoot()
{
    return Tree<T>::root;
}

template <class T>
void Tree<T>::printTree(Node <T> * curr)
{
    if(curr != nullptr)
    {
        printTree(curr->getLeftChild());
        std::cout << curr->getKey() << ",";
        printTree(curr->getRightChild());
    }
}