#include "ReadFile.hpp"
#include "../constants/constants.hpp"

/*
* Constructor with fileName paramter
*/
ReadFile::ReadFile(std::string fileName){
   _fileName = fileName;
}

ReadFile::~ReadFile(){

}

/*
* Open input file and performs read process.
* Fill the list with each item readed.
* Check the maximum number of file lines.
*
* return:
* 0 = file not found.
* 1 = if file is loaded correctly.
* 2 = if file exceed number of lines
*/
int ReadFile::openFile(void){
   int ret = 0;
   std::string line("");
   int maxLines = MAXLINES_FILE;

   _file.open(_fileName, std::fstream::in);

   if (_file.is_open())
   {
      ret = 1;
      // read each item of file and fill list
      while ( getline (_file,line) )
      {

        if (maxLines==0){
          ret = 2;
          break;
        }

        _fileItems.push_back(line);
        maxLines--;

      }

      _file.close();
   }

   return ret;
}

/*
* Return list of items
*/
std::list<std::string> ReadFile::getFileItems() const{
     return _fileItems;
}
