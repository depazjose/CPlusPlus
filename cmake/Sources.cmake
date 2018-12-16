function(SOURCES_INCLUDE)
    include_directories(${CMAKE_SOURCE_DIR}/src)
endfunction()


function(SOURCES_TO_COMPILE PROJECT_NAME)
    add_executable(${PROJECT_NAME}

            ${CMAKE_SOURCE_DIR}/src/main.cpp
            ${CMAKE_SOURCE_DIR}/src/h1.hpp
            ${CMAKE_SOURCE_DIR}/src/constants/constants.hpp
            ${CMAKE_SOURCE_DIR}/src/io/ReadFile.hpp
            ${CMAKE_SOURCE_DIR}/src/io/ReadFile.cpp
            ${CMAKE_SOURCE_DIR}/src/controller/Process.hpp
            ${CMAKE_SOURCE_DIR}/src/controller/Process.cpp

    )
endfunction()
