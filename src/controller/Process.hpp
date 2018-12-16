#ifndef __PROCESS__
#define __PROCESS__
#include <string>
#include <vector>
#include <algorithm>
#include "../constants/constants.hpp"
#include "../io/ReadFile.hpp"

class Process {

public:
  Process();
  ~Process();
  void setParameters(int argc, std::string *argv);
  void initProcess();

private:
  bool openInputFile(std::string pathFileName);
  int processInputItems();
  ReadFile *_readFile;
  std::string _inputFile;
  std::string *_parameters;
};

#endif /* __PROCESS__ */
