#include "WriteFile.hpp"
#include "../constants/constants.hpp"

/*
* Constructor with fileName paramter
*/
WriteFile::WriteFile(std::string fileName){
   _fileName = fileName;
}

WriteFile::~WriteFile(){
   _file.close();
}

/*
* Create output file.
*
*
* return:
* 0 = file was not created
* 1 = if file was created correctly.
*/
int WriteFile::openFile(void){
   int ret = 0;

   _file.open(_fileName, std::fstream::out);

   if (_file.is_open())
   {
      ret = 1;
   }

   return ret;
}

void WriteFile::setWriteItem(const std::string item){
   _file<<item<<std::endl;
}
