# CMakeLists.txt
#
# Author: JOSE DE PAZ
# Version: 1.0.0
# Date: Dic 15, 2018.

cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(ProjectName ProducerConsumer)
project(${ProjectName})

set(CMAKE_CXX_STANDARD 11)
message(STATUS "Using C++11")

set(AUTHOR "JOSE DE PAZ")
set(VERSION_MAJOR "1")
set(VERSION_MINOR "1")
set(VERSION_PATCH "0")

# Set maxLines and maxChars
set(MAXLINES_FILE 10000)
set(MAXCHARS_LINE 100)
set(USEMAX_DEFINITIONS TRUE)

# Set DEBUG mode
set(DEBUG_MODE false)

message(STATUS "=====================================================================")
message(STATUS "AUTHOR:  " ${AUTHOR})
message(STATUS "PROJECT: " ${ProjectName})
message(STATUS "VERSION: " ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})
message(STATUS "=====================================================================")

#Sources to include
include(cmake/Sources.cmake)





if (USEMAX_DEFINITIONS)
 message(STATUS "Add definitions for default")
 add_definitions(-DMAXLINES_FILE=${MAXLINES_FILE})
 add_definitions(-DMAXCHARS_LINE=${MAXCHARS_LINE})
endif()

if (DEBUG_MODE)
 message(STATUS "Work in DEBUG MODE")
 add_definitions(-DDEBUG_MODE=${DEBUG_MODE})
endif()

message(STATUS "Adding sources to project")
SOURCES_TO_COMPILE(${ProjectName})

message(STATUS "=====================================================================")
