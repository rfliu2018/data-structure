#include <iostream>
#include "./BinaryTree.hpp"
#include "./BinaryTreeNode.hpp"
using namespace std;

template <typename T>
void printValue(BinaryTreeNode<T> node)
{
    cout << node.value;
}

template <typename T>
void printValue(BinaryTreeNode<T> *pnode)
{
    cout << pnode->value << endl;
}

int main(void)
{
    BinaryTree<int> bt;

    bt.init(10);
    /* printValue(bt.root); */

    std::cout << "先序遍历:" << std::endl;  //注释1
    bt.preOrder();
    std::cout << std::endl;  //注释2

    std::cout << "中序遍历:" << std::endl;
    bt.inOrder();
    std::cout << std::endl;
    return 0;
}
