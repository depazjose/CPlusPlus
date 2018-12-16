#include "Process.hpp"


/*
*  Defaul constructor
*/
Process::Process(){
}

/*
*  Destructor
*/
Process::~Process(){
}

/*
* setParameters
* argc: count
* argv: array of values
*/
void Process::setParameters(int argc, std::string *argv){
  _parameters = new std::string[argc];
  for(int y=0; y<argc; y++){
    _parameters[y]=argv[y];
  }
}

/*
* performs general process
*/
void Process::initProcess(){

  // check algorithm to use

  std::vector<std::string>::iterator result = std::find(
    ALGORITHMS.begin(),
    ALGORITHMS.end(),
    _parameters[2]);

  if(result == std::end(ALGORITHMS)){
      std::cout<<"\n"<<MSN_INF_ALG_NOT_EXISTS
      <<" = "<<_parameters[2]<<std::endl;
      std::cout<<MSN_INF_ALG<<" = "<<DEFAULT_ALGORITHM<<std::endl;
      _parameters[2] = DEFAULT_ALGORITHM;
  }

  // open file

  if (this->openInputFile(_parameters[0]))
  {
     // init the check process of each item
     if (this->processInputItems()==0) {

       // init sort process
       this->sortItems(_parameters[2]);
       std::cout<<MSN_INF_PROC_E<<std::endl;
     }
     else
     {
       //process terminated prematurely
       std::cout<<MSN_INF_ITEM_C<<std::endl;
       std::cout<<MSN_INF_INFILE_P<<std::endl;
     }
  }
  else
  {
    //process terminated prematurely
    std::cout<<MSN_INF_INFILE_P<<std::endl;
  }

}

/*
* Performs process for open input file
* Return:
* true  = if input file was open and readed correctly
* false = if there is a error with open or read file
*/
bool Process::openInputFile(std::string pathFileName){
  bool ret = false;

  // set inputFile
  this->_readFile = new ReadFile(pathFileName);

  // open inputFile
  int retValue = this->_readFile->openFile();

  switch(retValue){
    case 0:{
      std::cout<<"\ninputFile: "<<_parameters[0]<<std::endl;
      std::cout<<"\t"<<MSN_ERR_INFILE<<std::endl<<std::endl;
      break;
    }
    case 1:{
      std::cout<<"\n"<<MSN_INF_INFILE_R<<std::endl;
      ret = true;
      break;
    }
    case 2:{
      std::cout<<"\n"<<MSN_INF_INFILE<<std::endl;
      break;
    }
    default:{
      break;
    }
  }

  ret = true;

  return ret;
}

/*
* Performs check of each item in the list
* Return:
* 0 = all items are within length parameter
* 1 = there are items are out length parameter
*/
int Process::processInputItems(){
  int ret = 0;

  itemsInputFile = this->_readFile->getFileItems();

  delete this->_readFile;

  // check each item of the list
  for (auto ite = itemsInputFile.cbegin();
    ite != itemsInputFile.cend();
    ite++){

    // Each item must have less than or equal length of characters of
    // MAXCHARS_LINE
    if ((*ite).length()>MAXCHARS_LINE){
      if (DEBUG_MODE){
         std::cout<<"-- max chars "<<*ite<<std::endl;
      }
      ret = 1;
      break;
    }
  }

  return ret;
}

/*
* Performs the sort process using <alg> algorithm
*/
void Process::sortItems(std::string alg){


}
