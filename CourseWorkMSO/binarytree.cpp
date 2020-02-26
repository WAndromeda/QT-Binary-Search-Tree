#include "binarytree.h"
#include "extra.h"

template <typename T>
Node<T>::Node(){
    left = nullptr;
    right = nullptr;
    data = nullptr;
}

template <typename T>
Node<T>::Node(const T& value){
    left = nullptr;
    right = nullptr;
    data = value;
}

template <typename T>
Node<T>::~Node(){
    delete left;
    delete right;
}

template <typename T>
BinaryTree<T>::BinaryTree(){
    root = nullptr;
}

template <typename T>
BinaryTree<T>::BinaryTree(const T& value){
    root = new Node<T>(value);
}

template <typename T>
BinaryTree<T>::~BinaryTree(){
   deleteTree(&root);
}

template <typename T>
void BinaryTree<T>::deleteTree(Node<T>** node){
    if ((*node) != nullptr){
        deleteTree(&(*node)->left);
        deleteTree(&(*node)->right);
    }
    delete (*node);
}

template <typename T>
Node<T>* BinaryTree<T>::insert(Node<T>** newRoot, const T& value){
    Node<T>* newNode = nullptr;
    if ((*newRoot) == nullptr){
        (*newRoot) = new Node<T>(value);
        newNode = (*newRoot);
    }
    else
        if ((*newRoot)->data > value)
            newNode = this->insert(&(*newRoot)->left, value);
        else
            if ((*newRoot)->data < value)
                newNode = this->insert(&(*newRoot)->right, value);
    return newNode;
}

template <typename T>
void BinaryTree<T>::preOrderShow(Node<T>* node, QQueue<QString>* queueOfElem){
    if (node == nullptr) return;
    queueOfElem->enqueue((QVariant(node->data).toString()));
    preOrderShow(node->left, queueOfElem);
    preOrderShow(node->right, queueOfElem);
}

template <typename T>
void BinaryTree<T>::inOrderShow(Node<T>* node, QQueue<QString>* queueOfElem){
    if (node == nullptr) return;
    inOrderShow(node->left, queueOfElem);
    queueOfElem->enqueue(QVariant(node->data).toString());
    inOrderShow(node->right, queueOfElem);
}

template <typename T>
void BinaryTree<T>::postOrderShow(Node<T>* node, QQueue<QString>* queueOfElem){
    if (node == nullptr) return;
    postOrderShow(node->left, queueOfElem);
    postOrderShow(node->right, queueOfElem);
    queueOfElem->enqueue(QVariant(node->data).toString());
}

template <typename T>
Node<T>* BinaryTree<T>::search(Node<T>* newRoot, const T& value){
    Node<T>* newNode = nullptr;
    if (newRoot != nullptr){
        if (newRoot->data == value)
            newNode =  newRoot;
        else
            if (newRoot->data < value)
                 newNode = search(newRoot->right, value);
            else
                newNode = search(newRoot->left, value);
    }
    return newNode;
}

template <typename T>
Node<T>* BinaryTree<T>::getRoot(){return root;}

template <typename T>
void BinaryTree<T>::choiceTree (QQueue<QString> *queueSet, int formFix, Node<T>* newRoot){
    switch (formFix) {
        case 0:
            return inOrderShow(newRoot, queueSet);
        case 1:
            return preOrderShow(newRoot, queueSet);
        case 2:
            return postOrderShow(newRoot, queueSet);
    }
}

template <typename T>
void BinaryTree<T>::readingData(QTextStream* in, int size, Node<T>** newRoot){
    T element;
    in->setCodec("UTF-8");
    for (int j = 0; j < size;){
        (*in) >> element;
        if (QVariant(element).toString() != " " && QVariant(element).toString() != "\n"){
            insert(newRoot, element);
            j++;
        }
    }
}

template <typename T>
bool readFile(QVector<QQueue<QString>> *vectorQueueSet, int formFix, QQueue<int>* queueOfTypes){
    QString path = "set.txt";
    QFile file(path);
    bool flag = file.open(QFile::ReadOnly | QFile::Text | QFile::ExistingOnly);
    int sizeVec = 0, sizeQueue = 0, type = 0;
    Node<T>* newRoot;
    if (flag){
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out >> sizeVec;
        vectorQueueSet->resize(sizeVec);
        for (int i = 0; i < sizeVec; i++){
            out >> type;
            out >> sizeQueue;
            queueOfTypes->enqueue(type);
            switch (type) {
            case 0:{
                BinaryTree<int> tree;
                Node<int>* newRoot = tree.getRoot();
                tree.readingData(&out, sizeQueue, &newRoot);
                tree.choiceTree(&(*vectorQueueSet)[i], formFix, newRoot);
                break;}
            case 1:{
                BinaryTree<double> tree;
                Node<double>* newRoot = tree.getRoot();
                tree.readingData(&out, sizeQueue, &newRoot);
                tree.choiceTree(&(*vectorQueueSet)[i], formFix, newRoot);
                break;}
            case 2:{
                BinaryTree<QChar> tree;
                Node<QChar>* newRoot = tree.getRoot();
                tree.readingData(&out, sizeQueue, &newRoot);
                tree.choiceTree(&(*vectorQueueSet)[i], formFix, newRoot);}
            }
        }
        file.close();
    }
    else
        createFileOfSets<QString>(path);
    return flag;
}

template <typename T>
bool writeNewSetInFile(QQueue<T> setQueue, int type){
    QString path = "set.txt";
    QFile file(path);
    bool flag = file.open(QFile::ReadWrite | QFile::Text | QFile::ExistingOnly);
    if (flag){
        QTextStream inOut(&file);
        inOut.setCodec("UTF-8");
        int size;
        inOut >> size; size++;
        inOut.seek(0);
        inOut << size;
        inOut.flush();
        file.close();
        file.open(QFile::Append | QFile::WriteOnly);
        inOut.setDevice(&file);
        inOut.setCodec("UTF-8");
        inOut << type << " " << setQueue.size();
        while(setQueue.size())
            inOut << " " << setQueue.dequeue();
        inOut << '\n';
        file.flush();
        file.close();
    }
    else
        createFileOfSets<QString>(path);
    return flag;
}

template <typename T>
bool writeDeleteOneSet(int numOfSet){
    QString path = "set.txt";
    QFile file(path);
    bool flag = file.open(QFile::ReadWrite | QFile::Text | QFile::ExistingOnly);
    int size;
    QString t, allFile = "";
    if (flag){
        QTextStream inOut(&file);
        inOut.setCodec("UTF-8");
        inOut >> size; size--;
        inOut.seek(0);
        allFile += QVariant(size).toString() + "       \n";
        inOut.readLine();
        for (int i = 0; i < size+1; i++){
            t = inOut.readLine();
            if (i != numOfSet-1)
                allFile += t + "\n";
        }
        file.close();
        file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate);
        inOut.setDevice(&file);
        inOut.setCodec("UTF-8");
        inOut << allFile;
        file.close();
    }
    else
        createFileOfSets<QString>(path);
    return flag;
}

template <typename T>
bool writeDeleteElement(int numOfSet, T element){
    QString path = "set.txt";
    QFile file(path);
    bool flag = file.open(QFile::ReadWrite | QFile::Text | QFile::ExistingOnly);
    int size;
    QString t, allFile = "";
    if (flag){
        QTextStream inOut(&file);
        inOut.setCodec("UTF-8");
        inOut >> size;
        inOut.seek(0);
        allFile += QVariant(size).toString() + "       \n";
        t = inOut.readLine();
        for (int i = 0; i < size; i++){
            t= inOut.readLine();
            if (i == numOfSet-1){
                int position = t.indexOf(' '), position2, positionB;
                 bool flag = false;
                for (int j = position+1; j < t.size(); j++)
                    if (t[j] == ' ' && flag){
                        position2 = j;
                        break;
                    }
                    else
                        flag = true;
                t = t.simplified();
                QString temp = t.mid(position, position2-position), word = "";
                int sizeOfSet = temp.toInt(); sizeOfSet--;
                flag = false;
                for (int j = position2+1; j < t.size(); j++)
                    if (t[j] == ' '){
                        if (word.trimmed() == element)
                            break;
                        word = "";
                        flag = false;
                    }
                    else{
                        if (!flag){
                            flag = true;
                            positionB = j;
                        }
                        word += t[j];
                    }
                int k = 1;
                if (positionB+element.size()+k > t.size())
                    k = 0;
                QString myStr = t.mid(positionB+element.size()+k, t.size()-positionB-element.size()-k);
                QString array[] = {t.mid(position2, positionB-position2).trimmed(), myStr.trimmed()};
                temp = t.mid(0, position) + " " + QVariant(sizeOfSet).toString() + " " + array[0] + " " + array[1];
                allFile += temp + '\n';
            }
            else
                allFile += t + '\n';
        }
        file.flush();
        file.close();
        file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate);
        inOut.setDevice(&file);
        inOut.setCodec("UTF-8");
        inOut << allFile;
        file.close();
    }
    else
        createFileOfSets<QString>(path);
    return flag;
}

template <typename T>
bool writeAddElement(int numOfSet, T element){
    QString path = "set.txt";
    QFile file(path);
    bool flag = file.open(QFile::ReadWrite | QFile::ExistingOnly | QFile::Text);
    int size;
    QString t, allFile = "";
    if (flag){
        QTextStream inOut(&file);
        inOut.setCodec("UTF-8");
        inOut >> size;
        inOut.seek(0);
        allFile += QVariant(size).toString() + "       \n";
        t = inOut.readLine();
        for (int i = 0; i < size; i++){
            t = inOut.readLine();
            if (i == numOfSet-1){
                t += " " + element;
                int position = t.indexOf(' '), position2;
                for (int j = position+1; j < t.size(); j++)
                    if (t[j] == ' '){
                        position2 = j;
                        break;
                    }
                QString temp = t.mid(position, position2-position);
                int sizeOfSet = temp.toInt(); sizeOfSet++;
                temp = t.mid(0, position) + " " + QVariant(sizeOfSet).toString() + t.mid(position2, t.size());
                allFile += temp + '\n';
            }
            else
                allFile += t + '\n';
        }

        file.flush();
        file.close();
        file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate);
        inOut.setDevice(&file);
        inOut.setCodec("UTF-8");
        inOut << allFile;
        file.flush();
        file.close();
    }
    else
        createFileOfSets<QString>(path);
    return flag;
}

template <typename T>
bool createFileOfSets(QString path){
    QFile file(path);
    bool flag = file.open(QFile::WriteOnly | QFile::Text);
    if (flag){
        QTextStream in(&file);
        in.setCodec("UTF-8");
        in << 0 << "       \n";
        in.flush();
        file.close();
    }
    return flag;
}


template <typename T>
QQueue<QString> intersectionTrees(QQueue<T> firstSet, QQueue<T> secondSet){
    BinaryTree<T> tree, newTree;
    Node<T>* node = tree.getRoot(), *newNode = newTree.getRoot();
    Node<T>** root = &node, **newRoot = &newNode;
    while (secondSet.size())
        tree.insert(root, secondSet.dequeue());
    while(firstSet.size())
        if (tree.search((*root), firstSet.head()) != nullptr)
            newTree.insert(newRoot, firstSet.dequeue());
        else
            firstSet.dequeue();
    QQueue<QString> newSet;
    newTree.inOrderShow((*newRoot), &newSet);
    return newSet;
}

template <typename T>
QQueue<QString> unionTrees(QQueue<T> firstSet, QQueue<T> secondSet){
    BinaryTree<T> tree;
    Node<T>* node = tree.getRoot();
    Node<T>** root = &node;
    while (secondSet.size())
        tree.insert(root, secondSet.dequeue());
    while(firstSet.size())
        tree.insert(root, firstSet.dequeue());
    QQueue<QString> newSet;
    tree.inOrderShow((*root), &newSet);
    return newSet;
}

template <typename T>
QQueue<QString> differenceTrees(QQueue<T> firstSet, QQueue<T> secondSet){
    BinaryTree<T> tree, newTree;
    Node<T>* node = tree.getRoot(), *newNode = newTree.getRoot();
    Node<T>** root = &node, **newRoot = &newNode;
    while (secondSet.size())
        tree.insert(root, secondSet.dequeue());
    while(firstSet.size())
        if (tree.search((*root), firstSet.head()) == nullptr)
            newTree.insert(newRoot, firstSet.dequeue());
        else
            firstSet.dequeue();
    QQueue<QString> newSet;
    newTree.inOrderShow((*newRoot), &newSet);
    return newSet;
}
