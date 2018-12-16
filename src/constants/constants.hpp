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
static std::string DEFAULT_ALGORITHM ({"asc"});
static std::vector<std::string> ALGORITHMS ({DEFAULT_ALGORITHM,"desc"});

static std::string MSN_INF_ALG_NOT_EXISTS ("INF: Value for sort algorithm is wrong");
static std::string MSN_INF_ALG ("INF: Will be use default sort algorithm");

static std::string MSN_ERR_FILE ("ERR: input file wrong or file does not exists");
static std::string MSN_INF_FILE ("INF: input file exceeded max lines amount");
static std::string MSN_INF_FILE_R ("INF: input file was readed correctly.");
static std::string MSN_INF_FILE_P ("INF: Process was terminated prematurely.");
static std::string MSN_INF_ITEM_C ("INF: there are items that exceeded max chars amount");
static std::string MSN_INF_PROC_E ("INF: Process terminated.");



#endif /*__CONSTANTS__ */
