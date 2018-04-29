#ifndef SEARCHFUNCTION_H
#define SEARCHFUNCTION_H

#include <QString>
#include <QFileInfoList>
#include <QDebug>
#include <QDir>


class SearchFunction
{
public:
    SearchFunction();


    // 搜索函数
    void searchExecute();
    // 目录中搜索文件
    void findFileInDirectory();
    // 文件中搜索内容
    void findContentInFile();
    // 递归遍历文件夹
    QFileInfoList getFileList(QString path);





    // 打开文件夹或者文件
    bool m_bIsDirectoryOrFile;
    // 保存目录或文件路径
    QString m_strDirectoryOrFilePath;
    // 保存要搜索的关键字
    QString m_strKeyWord;
};

#endif // SEARCHFUNCTION_H
