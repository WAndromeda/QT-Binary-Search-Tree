#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <fstream>
#include <cstdlib>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QQueue>
#include <QTextStream>
#include <QVariant>
#include <QVector>


template<typename T>
struct Node{
    T data;
    Node<T>* left;
    Node<T>* right;
    Node();
    Node(const T&);
    ~Node();
};

template <typename T>
class BinaryTree{
private:
    Node<T> *root;
    void deleteTree(Node<T>**);
public:
    BinaryTree<T>();
    BinaryTree<T>(const T&);
    ~BinaryTree();
    Node<T>* insert(Node<T>**, const T&);
    Node<T>* search(Node<T>*, const T&);
    void preOrderShow(Node<T>*, QQueue<QString> *);
    void inOrderShow(Node<T>*, QQueue<QString> *);
    void postOrderShow(Node<T>*, QQueue<QString> *);
    void choiceTree (QQueue<QString>*, int, Node<T>*);
    void readingData(QTextStream*, int, Node<T>**);
    Node<T>* getRoot();
};

template <typename T>
bool readFile(QVector<QQueue<QString>>*, int, QQueue<int>*);

template <typename T>
bool writeNewSetInFile(QQueue<T>, int);

template <typename T>
bool writeDeleteOneSet(int);

template <typename T>
bool writeDeleteElement(int, T);

template <typename T>
bool writeAddElement(int, T);

template <typename T>
bool createFileOfSets(QString);

template <typename T>
QQueue<QString> intersectionTrees(QQueue<T>, QQueue<T>);

template <typename T>
QQueue<QString> unionTrees(QQueue<T>, QQueue<T>);

template <typename T>
QQueue<QString> differenceTrees(QQueue<T>, QQueue<T>);

#endif // BINARYTREE_H
