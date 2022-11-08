//
// Created by 陈海楠 on 2022/11/4.
//
#include <stdio.h>
#include "decode.h"
#include <string.h>

const int flac_header[5] = {0X66, 0x4c, 0x61, 0x43, 0x00};


void read_file(char *filePath) {
    char buffer[8192];
    FILE *file = fopen(filePath, "r");
    if (file) {
//        file->_read(,&buffer, BUFSIZ);
        setvbuf(file, buffer, _IOLBF, 8192);
//        file->_read()
        fclose(file);
    }
}
