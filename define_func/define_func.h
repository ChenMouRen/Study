//
// Created by 陈海楠 on 2022/11/8.
//
#include <stdarg.h>
#include <stdio.h>

#ifndef STUDY_DEFINE_FUNC_H
#define STUDY_DEFINE_FUNC_H

#define MAX(a, b) a > b ? a : b

void printfln(const char *value, ...);


#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

#define println(format, ...) printf(format"\n", ##__VA_ARGS__)


#define DEBUG_PRINT_CHAR(value) printfln("file("__FILE__":%d) %s"#value" is %s\n",__LINE__,__FUNCTION__,value)

#define DEBUG_PRINT_INT(value) printfln(#value" is %d\n",value)

#endif //STUDY_DEFINE_FUNC_H
