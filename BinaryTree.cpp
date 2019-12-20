//2019, 12/20, pm 2:30, by Queenie Chen
// to create a class of Binary Tree

//objects:
// a finite set of nodes either empty or
// consisting of a
// root node
// left binary tree
// right binary tree

template<class KeyType>
class BinaryTree
{
    public:
        BinaryTree();

        bool isEmpty();

        BinaryTree(BinaryTree bt1, Element <KeyType> item, BinaryTree bt2);
        // root node contains item

        BinaryTree LeftChild;

        BinaryTree RightChid;

        Element <KeyType> Data();
        // if isEmpty(), return error; else return data in root node of *this pointer

};

