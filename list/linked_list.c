//
// Created by 陈海楠 on 2023/3/28.
//

#include <stdlib.h>
#include "linked_list.h"

LinkedList *createList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    ListNode *node = malloc(sizeof(ListNode));
    node->frontNode = NULL;
    node->nextNode = NULL;
//    node->value = value;
    list->size++;
    list->head = node;
    list->current = node;
    return list;
}

void addData(LinkedList *list, int value) {
    ListNode *node = malloc(sizeof(ListNode));
    node->frontNode = list->current;
    list->current->nextNode = node;
    node->value = value;
    list->current = node;
}

void deleteList(LinkedList *list) {
    ListNode *node = list->head;
    while (node) {
        node->frontNode = NULL;
        ListNode *nextNode = node->nextNode;
        node->nextNode = NULL;
        free(node);
        node = nextNode;
    }
    free(list);
}
