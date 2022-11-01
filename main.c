#include <stdio.h>
#include "nar_number/nar_number.h"
#include "tables/multi_tables.h"
#include "sequence/sequence.h"

int main() {

//    findAllNumber(1000);
//    print_tables();
    long result = calculate_sequence(100000);
    printf("result is %ld", result);
    return 0;
}
