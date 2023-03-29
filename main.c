#include "define_func/define_func.h"
#include "list/linked_list.h"
#include "stdlib.h"
#include "time.h"



// 如果是windows就引入避免乱码
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    // 如果是windows就设置控制台为Utf8编码
    SetConsoleOutputCP(65001);
#endif
    println("Hello World");
    srand((unsigned int) time(NULL));
    LinkedList *list = createList();
    for (int i = 0; i < 100; ++i) {
        addData(list, rand() % 100 + 1);
    }
    ListNode *node = list->head;
    printf("[");
    while (node) {
        printf("%d", node->value);
        node = node->nextNode;
        if (node) {
            printf(",");
        }
    }
    printf("]");
    deleteList(list);
    return 0;
}
