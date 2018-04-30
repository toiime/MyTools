#ifndef SEARCHFUNCTION_H
#define SEARCHFUNCTION_H

#include <QString>
#include <QFileInfoList>
#include <QDebug>
#include <QDir>

#include "common.h"


class SearchFunction
{
public:
    SearchFunction();


    // 搜索函数
    void searchExecute();
    // 目录中搜索文件
    void findFileInDirectory();
    // 目录中搜索文件内容
    void findContentInDirectory();
    // 文件中搜索内容
    int findContentInFile(QFileInfo & fileInfo);
    // 递归遍历文件夹
    QFileInfoList getFileList(QString path);





    // 打开文件夹或者文件
    bool m_bIsDirectoryOrFile;
    // 是否目录中搜索文件内容
    bool m_bIsFindContentFromDirectory;
    // 保存目录或文件路径
    QString m_strDirectoryOrFilePath;
    // 保存要搜索的关键字
    QString m_strKeyWord;




    // 保存搜索结果
    QFileInfoList m_fileList;
    QVector<RESULT_DIRECTOR_FIND_CONTENT> m_vect_result_file_content;

};

#endif // SEARCHFUNCTION_H
