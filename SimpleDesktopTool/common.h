#ifndef COMMON_H
#define COMMON_H

// 保存搜索结果的结构体...
struct RESULT_DIRECTOR_FIND_CONTENT{
    QFileInfo fileInfo;             // 主要保存文件名
    QStringList contentList;        // 文件中搜索到的行内容
};

// 搜索参数结构体
struct SEARCH_CONDITION{
public:
    bool bIsContainSuffix;      // 用户选择了 包函后缀 还是选了 不包函后缀
    QStringList strContainSuffix;
    QStringList strNotContainSuffix;
    SEARCH_CONDITION(){
        bIsContainSuffix = false;
    }
};


#endif // COMMON_H
