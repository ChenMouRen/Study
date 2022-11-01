//
// Created by 陈海楠 on 2022/11/1.
//

#include "sequence.h"

long calculate_sequence(int index) {
    if (index == 1 || index == 2) {
        return 1;
    }
    long result = 0L;
    long temp1 = 1L, temp2 = 1L;
    for (int i = 2; i <= index; i++) {
        result = temp1 + temp2;
        temp1 = temp2;
        temp2 = result;
    }
    return result;
}
