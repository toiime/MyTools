#include "searchfunction.h"

SearchFunction::SearchFunction()
{

    // 打开文件或文件夹...
    this->m_bIsDirectoryOrFile = true;
}

void SearchFunction::searchExecute(){
    // 清空 m_fileList 原有数据
    m_fileList.clear();

    if(m_bIsDirectoryOrFile)
        findFileInDirectory();
    else
        findContentInFile();
}

void SearchFunction::findFileInDirectory(){
    m_fileList = getFileList(m_strDirectoryOrFilePath);

    for(auto iter = m_fileList.begin(); iter != m_fileList.end();){
        if(!iter->fileName().contains(m_strKeyWord))
            iter = m_fileList.erase(iter);
        else
            ++iter;
    }

}

void SearchFunction::findContentInFile(){

}

// 递归遍历文件夹
QFileInfoList SearchFunction::getFileList(QString path)
{
    QDir dir(path);

    //列出dir(path)目录文件下所有文件和目录信息，存储到file_list容器
    QFileInfoList file_list = dir.entryInfoList(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    //列出dir(path)目录下所有子文件夹
    QFileInfoList folder_list = dir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
    //进行子文件夹folder_list递归遍历，将内容存入file_list容器
    for(int i = 0; i != folder_list.size(); i++)
    {
        QString name = folder_list.at(i).absoluteFilePath();
        QFileInfoList child_file_list = getFileList(name);
        file_list.append(child_file_list);
    }
    return file_list;
}




