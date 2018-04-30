#ifndef COMMON_H
#define COMMON_H

// 保存搜索结果的结构体...
struct RESULT_DIRECTOR_FIND_CONTENT{
    QFileInfo fileInfo;             // 主要保存文件名
    QStringList contentList;        // 文件中搜索到的行内容
};


#endif // COMMON_H
