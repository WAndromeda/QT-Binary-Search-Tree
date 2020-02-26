#include "extra.h"
#include "binarytree.cpp"

bool checkChar(QString str){
    bool flag = true;
    if (str.size() != 1)
        flag = false;
    return flag;
}

int numOfType(QString str){
    if (str == "Целое")
        return 0;
    else if (str == "Дробь")
        return 1;
    else
        return 2;
}

QString nameOfType(int type){
    switch (type) {
    case 0:
        return QString("Целое");
    case 1:
        return QString("Дробь");
    case 2:
        return QString("Символ");
    default:
        return QString("Не указан");
    }
}

int maxOfQueue(QVector<QQueue<QString>> vectorQueueSet){
    int max = vectorQueueSet[0].size();
    for (int i = 1; i <  vectorQueueSet.size(); i++)
        if (vectorQueueSet[i].size() > max)
            max = vectorQueueSet[i].size();
    return max;
}

bool loadSettings(QString &font, int &size){
    QString path = "settings.txt";
    QFile fileSettings(path);
    bool flag = fileSettings.open(QFile::ReadOnly | QFile::Text | QFile::ExistingOnly);
    if (flag){
        QTextStream in(&fileSettings);
        in.setCodec("UTF-8");
        font = in.readLine();
        in >> size;
        in.flush();
        fileSettings.close();
    }
    else{
        createFileSettings(path);
        font = "Times New Roman";
        size = 10;
    }
    return flag;
}

bool saveSettings(QString font, int size){
    QString path = "settings.txt";
    QFile fileSettings(path);
    bool flag = fileSettings.open(QFile::WriteOnly | QFile::Text | QFile::ExistingOnly);
    if (flag){
        QTextStream out(&fileSettings);
        out.setCodec("UTF-8");
        out << font << '\n' << size;
        out.flush();
        fileSettings.close();
    }
    else
        createFileSettings(path);
    return flag;
}

bool createFileSettings(QString path){
    QFile fileSettings(path);
    fileSettings.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&fileSettings);
    out.setCodec("UTF-8");
    QString font = "Times New Roman";
    int size = 10;
    out << font << '\n' << size;
    out.flush();
    fileSettings.close();
}
