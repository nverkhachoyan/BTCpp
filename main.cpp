#include <iostream>
#include "Node.h"
#include "Tree.h"

int main()
{
    Node<int> * node = new Node(9);
    Node<int> * node1 = new Node(15);
    Node<int> * node2 = new Node(19);
    Node<int> * node3 = new Node(25);

    Tree <int> tree;
    tree.insert(tree.getRoot(), node);
    tree.insert(tree.getRoot(), node1);
    tree.insert(tree.getRoot(), node2);
    tree.insert(tree.getRoot(), node3);

    tree.printTree(tree.getRoot());
    // std::cout << "The key is " << node.getKey() << "\n";
    // std::cout << "Testing";
    return 0;
}