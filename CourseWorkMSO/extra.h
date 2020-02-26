#ifndef EXTRA_H
#define EXTRA_H
#include <binarytree.h>
#include <string>
#include <QQueue>
#include <QString>
#include <QVector>

bool checkChar(QString);
int numOfType(QString);
QString nameOfType(int);
int maxOfQueue(QVector<QQueue<QString>>);
bool loadSettings(QString&, int&);
bool saveSettings(QString, int);
bool createFileSettings(QString);

#endif // EXTRA_H
