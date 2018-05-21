#ifndef BINARYTREE
#define BINARYTREE
#include <stack>
#include "./BinaryTreeNode.hpp"

template <typename T>
void visitNode(BinaryTreeNode<T>* pn)
{
    std::cout << pn->value << "  ";
}

/**
 * 先序遍历的递归实现
 */
template <typename T>
void _preOrder1(BinaryTreeNode<T>* pn)
{
    if (pn == nullptr) {
        return;
    }

    visitNode(pn);
    _preOrder1(pn->left);
    _preOrder1(pn->right);
}

/**
 * 先序遍历的非递归实现
 */
template <typename T>
void _preOrder2(BinaryTreeNode<T>* pn)
{
    std::stack<BinaryTreeNode<T>*> s;

    BinaryTreeNode<T>* p = pn;
    while (p != nullptr || !s.empty()) {
        while (p != nullptr) {
            visitNode(p);
            s.push(p);
            p = p->left;
        }

        p = s.top();
        s.pop();
        p = p->right;
    }
}

/**
 * 中序遍历的非递归实现
 */
template <typename T>
void _inOrder(BinaryTreeNode<T>* root)
{
    std::stack<T> s;

    BinaryTreeNode<T>* p = root;
    while (p != nullptr || !s.empty()) {
        while (p != nullptr) {
            s.push(p);
            p = p->left;
        }

        p = s.top();
        s.pop();
        visitNode(p);
        p = p->right;
    }
}

template <typename T>
class BinaryTree
{
  public:
    BinaryTreeNode<T>* root;

  public:
    BinaryTree(T value);
    BinaryTree() {}
    void preOrder()
    {
        _preOrder2(root);
        std::cout << std::endl;
    }

    void inOrder() { _inOrder(root); }
    void init(T i)
    {
        root = new BinaryTreeNode<T>(i);
        root->left = new BinaryTreeNode<T>(1);
        root->left->left = new BinaryTreeNode<T>(3);
        root->left->left->right = nullptr;
        root->left->left->left = nullptr;
        root->left->right = new BinaryTreeNode<T>(4);
        root->left->right->left = new BinaryTreeNode<T>(5);
        root->left->right->right = nullptr;

        root->right = new BinaryTreeNode<T>(2);
        root->right->left = new BinaryTreeNode<T>(6);
        root->right->left->left = nullptr;
        root->right->left->right = nullptr;
        root->right->right = new BinaryTreeNode<T>(7);
        root->right->right->left = new BinaryTreeNode<T>(8);
        root->right->right->right = nullptr;
    }

    virtual ~BinaryTree(){};

  private:
    /* data */
};

template <typename T>
BinaryTree<T>::BinaryTree(T value)
{
    root = new BinaryTreeNode<T>(value);
}

#endif /* ifndef BINARY */
