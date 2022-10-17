//
// Created by Nver Khachoyan on 10/16/22.
//

#include "Node.h"

// constructor
template <class T>
    Node<T>::Node(T theKey)
    {
        this->key = theKey;
    }

// setters
template <class T>
    void Node<T>::setLeftChild(Node* newNode)
    {
        this->leftChild = newNode;
    }

template <class T>
    void Node<T>::setRightChild(Node* newNode)
    {
        this->rightChild = newNode;
    }

// getters
template <class T>
    Node<T>* Node<T>::getParent()
    {
        return Node<T>::parent;
    }
template <class T>
    Node<T>* Node<T>::getLeftChild()
    {
        return Node<T>::leftChild;
    }
template <class T>
    Node<T>* Node<T>::getRightChild()
    {
        return Node<T>::rightChild;
    }
template <class T>
    T Node<T>::getKey()
    {
        return Node<T>::key;
    }