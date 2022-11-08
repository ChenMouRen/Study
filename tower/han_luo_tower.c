//
// Created by 陈海楠 on 2022/11/8.
//

#include "han_luo_tower.h"
#include <stdio.h>

void move(int n, char src, char target, char temp) {
    if (n == 0) {
        return;
    } else if (n == 1) {
        printf("%c --> %c\n", src, target);
    } else {
        move(n - 1, src, temp, target);
        move(1, src, target, temp);
        move(n - 1, temp, target, src);
    }
}