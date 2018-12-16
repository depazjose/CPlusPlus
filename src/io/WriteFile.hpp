#ifndef __WRITE_FILE_HPP__
#define __WRITE_FILE_HPP__

#include <iostream>
#include <fstream>
#include <list>

class WriteFile {

public:
    WriteFile(std::string fileName);
    ~WriteFile();
    int openFile(void);
    void setWriteItem(const std::string item);

private:
  std::string _fileName;
  std::fstream _file;
};

#endif /* __WRITE_FILE_HPP__ */
