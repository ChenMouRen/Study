#include <stdlib.h>
#include "define_func/define_func.h"
//#include "array/array.c"


// 如果是windows就引入避免乱码
#ifdef _WIN32
#include <windows.h>
#endif

//void method_args(int x, ...) {
//    va_list args;
//    va_start(args, x);
//    int temp;
//    while ((temp = va_arg(args, int)) != END) {
//        printf("value of args: %d\n", temp);
//    }
//    va_end(args);
//}

int main() {
#ifdef _WIN32
    // 如果是windows就设置控制台为Utf8编码
    SetConsoleOutputCP(65001);
#endif
//    int array[] = {1, 3, 4, 5, 6};
//    int *p = array;
//    printf("%d\n", *p);
//    printf("%d\n", *(p + 2));
    int *point = malloc(sizeof(int) * 16);
    return 0;
}
