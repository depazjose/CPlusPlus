# Implementation a simple Producer/Consumer pattern in Linux.


## General objectives:

- Sort input items following well known best practices of C++


## Specific objectives:

- The project must be implemented in C++, and compiled using CMake.
- The main process must be a command line executable which loads a file as input file.
- The main process must generate an output file in which the results will be printed.
- The main process must use an sort algorithm.


## Technical specs:
- Compile using CMake 3.5.1 version or greater
- Compile using GCC version with C++11 compatibility.

## Functional specs:
- Compiling proces generate "ProducerConsumer" executable file.
- Execute "ProducerConsumer" file with three parameters:
  - First parameter:  path and name of input file
  - Second parameter: path and name of output file
  - Third parameter:  sort algorithm to use, this parameter is optional.
                     allowed values: asc | desc
- Example of use No.1:
     * ./ProducerConsumer /FILES/input.txt /FILES/ouput.txt
- Example of use No.2:
     * - ./ProducerConsumer /FILES/input.txt /FILES/ouput.txt asc
- **-Note:** if there is not a third parameter, process will be use "asc" sort algorithm as default value.
- Information messages will be show while process is executed.
