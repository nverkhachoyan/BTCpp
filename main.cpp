#include "Node.h"
#include "Tree.h"
#include <iostream>

int main()
{
    // Tree with integers
    int numbers[8] = { 2, 4, 3, 1, 8, 5, 6, 7};
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    Tree <int> integerTree;
    for(int i = 0; i < numbersSize; i++)
    {
        Node<int> * node = new Node(numbers[i]);
        integerTree.insert(integerTree.getRoot(), node);
    }

    integerTree.printTree(integerTree.getRoot());

//    // Tree with strings
//
//
//    std::string name = "Jack";
//    Node<std::string> * myNode = new Node(name);
//    Tree <std::string> stringTree;
//    stringTree.insert(stringTree.getRoot(), myNode);
//    stringTree.printTree(stringTree.getRoot());
    return 0;
}