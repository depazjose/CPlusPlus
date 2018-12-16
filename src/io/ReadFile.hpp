#ifndef __READ_FILE_HPP__
#define __READ_FILE_HPP__

#include <iostream>
#include <fstream>
#include <list>

class ReadFile {

public:
    ReadFile(std::string fileName);
    ~ReadFile();
    int openFile(void);
    std::list<std::string> getFileItems() const;

private:
  std::string _fileName;
  std::fstream _file;
  std::list<std::string> _fileItems;
};

#endif /* __READ_FILE__ */
