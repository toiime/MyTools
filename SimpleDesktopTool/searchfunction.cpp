#include "searchfunction.h"

SearchFunction::SearchFunction()
{

    // 打开文件或文件夹...
    this->m_bIsDirectoryOrFile = true;
    m_bIsFindContentFromDirectory = false;
	// 不区分大小写...
	m_bIsCaseSensitive = false;
}

void SearchFunction::searchExecute(){
    // 清空 m_fileList 原有数据
    m_fileList.clear();
    m_vect_result_file_content.clear();
	m_sl_content_from_file.clear();

    if(m_bIsDirectoryOrFile){
        if(m_bIsFindContentFromDirectory)
            findContentInDirectory();
        else
            findFileInDirectory();
    }
    else
        findContentInFile();
}

void SearchFunction::findFileInDirectory(){
    m_fileList = getFileList(m_strDirectoryOrFilePath);

    for(auto iter = m_fileList.begin(); iter != m_fileList.end();){

		if (m_bIsCaseSensitive) {
			if (!iter->fileName().contains(m_strKeyWord))
				iter = m_fileList.erase(iter);
			else
				++iter;
		}
		else {
			if (!iter->fileName().toLower().contains(m_strKeyWord.toLower()))
				iter = m_fileList.erase(iter);
			else
				++iter;
		}
    }

}

int SearchFunction::findContentInFile(QFileInfo & fileInfo){
    RESULT_DIRECTOR_FIND_CONTENT t_result;
    QFile dataFile(fileInfo.absoluteFilePath());
    if (!dataFile.open(QFile::ReadOnly|QIODevice::Text))
        return -1;
    QTextStream data(&dataFile);
    QString line;
    while (!data.atEnd())//逐行读取文本，并去除每行的回车
    {
        line = data.readLine();
        line.remove('\n');

		if (m_bIsCaseSensitive) {
			if (line.contains(m_strKeyWord))
				t_result.contentList.push_back(line);
		}
		else {
			if (line.toLower().contains(m_strKeyWord.toLower()))
				t_result.contentList.push_back(line);
		}
    }
    dataFile.close();
    if(!t_result.contentList.isEmpty()){
        t_result.fileInfo = fileInfo;
        m_vect_result_file_content.push_back(t_result);
        return 0;
    }else
        return -1;
}

int SearchFunction::findContentInFile() {

	QFile dataFile(m_strDirectoryOrFilePath);
	if (!dataFile.open(QFile::ReadOnly | QIODevice::Text))
		return -1;
	QTextStream data(&dataFile);
	QString line;
	while (!data.atEnd())//逐行读取文本，并去除每行的回车
	{
		line = data.readLine();
		line.remove('\n');

		if (m_bIsCaseSensitive) {
			if (line.contains(m_strKeyWord))
				m_sl_content_from_file.push_back(line);
		}
		else {
			if (line.toLower().contains(m_strKeyWord.toLower()))
				m_sl_content_from_file.push_back(line);
		}
	}
	dataFile.close();
	if (!m_sl_content_from_file.isEmpty())
		return 0;
	else
		return -1;
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

// 目录中搜索文件内容
void SearchFunction::findContentInDirectory(){
    m_fileList = getFileList(m_strDirectoryOrFilePath);

    for(auto iter = m_fileList.begin(); iter != m_fileList.end();){
        if(!findContentInFile(*iter))
            iter = m_fileList.erase(iter);
        else
            ++iter;
    }
}




