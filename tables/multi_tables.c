#include "multi_tables.h"
#include "stdio.h"

//
// Created by 陈海楠 on 2022/11/1.
//
void print_tables() {
    for (int y = 1; y <= 9; y++) {
        for (int x = 1; x <= y; x++) {
            printf("%d * %d = %d \t", x, y, x * y);
        }
        printf("\n");
    }

}