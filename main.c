#include <stdio.h>
#include <stddef.h>
#include "nar_number/nar_number.h"
#include "tables/multi_tables.h"
#include "sequence/sequence.h"
#include "music/decode.h"
#include "tower/han_luo_tower.h"
#include "define_func/define_func.h"

// 如果Windows就导入来设置控制台编码
#ifdef _WIN32
#include <windows.h>
#endif



int main() {
#ifdef _WIN32
	// 如果Windows就设置控制台编码
	SetConsoleOutputCP(65001);
#endif 
	findAllNumber(1000);
	return 0;
}
