#include <stdio.h>
#include <stddef.h>
#include "nar_number/nar_number.h"
#include "tables/multi_tables.h"
#include "sequence/sequence.h"
#include "music/decode.h"
#include "tower/han_luo_tower.h"
#include "define_func/define_func.h"

//#define DEBUG

void dump(char *value) {
#ifdef DEBUG
    puts(value);
#endif
}

int main() {
    dump("Hello");
    return 0;
}
