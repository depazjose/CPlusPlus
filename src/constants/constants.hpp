#ifndef __CONSTANTS__
#define __CONSTANTS__

#include <vector>
#include <string>

#define PROJECT "ProducerConsumer"

// max lines of input file
#ifndef MAXLINES_FILE
 #define MAXLINES_FILE 10000
#endif

// max lines of input file
#ifndef MAXCHARS_LINE
 #define MAXCHARS_LINE 100
#endif

// for DEBUG mode
#ifndef DEBUG_MODE
 #define DEBUG_MODE false
#endif

// type of algorithms
#define DEFAULT_ALGORITHM "asc"
static std::vector<std::string> ALGORITHMS ({DEFAULT_ALGORITHM,"desc"});

#define MSN_INF_ALG_NOT_EXISTS "INF: Value for sort algorithm is wrong"
#define MSN_INF_ALG "INF: Will be use default sort algorithm"

#define MSN_ERR_INFILE "ERR: input file wrong or file does not exists"
#define MSN_INF_INFILE "INF: input file exceeded max lines amount"
#define MSN_INF_INFILE_R "INF: input file was readed correctly"
#define MSN_INF_INFILE_P "INF: Process was terminated prematurely"
#define MSN_ERR_OUTFILE "ERR: output file could not be created.\n     check permissions of path"
#define MSN_INF_ITEM_C "INF: there are items that exceeded max chars amount"
#define MSN_INF_PROC_E "INF: Process terminated."





#endif /*__CONSTANTS__ */
