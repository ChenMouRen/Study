#include<stdio.h>
#include<math.h>
#include "./nar_number.c.h"

//
// Created by 陈海楠 on 2022/11/1.
//

int cubic(int i) {
    return i * i * i;
}

void findAllNumber(int endNumber) {
    for (int number = 100; number < endNumber; number++) {
        // 百位
        int firstNum = number / 100;
        // 十位
        int secondNum = number % 100 / 10;
        // 个位
        int thirdNum = number % 100 % 10;
        if (cubic(firstNum) + cubic(secondNum) + cubic(thirdNum) == number) {
            printf("找到一个水仙花数: \t%d\n", number);
        }
    }
}

