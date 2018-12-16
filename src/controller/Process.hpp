#ifndef __PROCESS__
#define __PROCESS__
#include <string>
#include <vector>
#include <algorithm>
#include "../constants/constants.hpp"
#include "../io/ReadFile.hpp"
#include "../io/WriteFile.hpp"


class Process {

public:
  Process();
  ~Process();
  void setParameters(int argc, std::string *argv);
  void initProcess();

private:
  bool openInputFile(std::string pathFileName);
  int processInputItems();
  void sortItems(std::string alg);

  ReadFile *_readFile;
  WriteFile *_writeFile;
  std::string _inputFile;
  std::string *_parameters;
  std::list<std::string> itemsInputFile;
};

#endif /* __PROCESS__ */
