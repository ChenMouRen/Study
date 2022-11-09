//
// Created by 陈海楠 on 2022/11/8.
//
#include "define_func.h"

void printfln(const char *value, ...) {
    va_list args;
    va_start(args,value);
    vprintf(value, args);
//    printf("\n");
    va_end(args);
}