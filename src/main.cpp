#include <iostream>
#include <string>
#include "controller/Process.hpp"


int main(int argc, char **argv){
  
  // check if args length equals or greater than 3
  if (argc >=3 ){

    std::string parameters[3] = {"\0","\0","\0"};

    for (int x=1; x<argc; x++){
      if (x>3) break;
      parameters[x-1] = std::string ({argv[x]});
    }

    Process *processController = new Process();
    // set only first three parameters
    processController->setParameters(3, &parameters[0]);
    // init general process
    processController->initProcess();

  }
  else
  {
    std::cout<<""<<std::endl;
    std::cout<<"ProducerConsumer: wrong parameters"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"\tExpected parameters:"<<std::endl;
    std::cout<<"\tPar1: InputFile"<<std::endl;
    std::cout<<"\tPar2: OutputFile"<<std::endl;
    std::cout<<"\tPar3: Algorithm to use (this parameter is optional)"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"\tExample 1:\n\t ./"<<PROJECT<<" in.txt out.txt"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"\tExample 2:\n\t ./"<<PROJECT<<" in.txt out.txt asc"<<std::endl;
    std::cout<<""<<std::endl;
  }


  return 0;
}
