#ifndef SEARCHFUNCTION_H
#define SEARCHFUNCTION_H

#include <QString>


class SearchFunction
{
public:
    SearchFunction();



    // 打开文件夹或者文件
    bool m_bIsDirectoryOrFile;
    // 保存目录或文件路径
    QString m_strDirectoryOrFilePath;
    // 保存要搜索的关键字
    QString m_strKeyWord;
};

#endif // SEARCHFUNCTION_H
