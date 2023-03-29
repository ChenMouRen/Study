//
// Created by 陈海楠 on 2023/3/28.
//

#ifndef STUDY_LINKED_LIST_H
#define STUDY_LINKED_LIST_H

typedef struct Node {

    struct Node *frontNode;

    int value;

    struct Node *nextNode;

} ListNode;

typedef struct LinkedList {

    struct Node *head;

    struct Node *current;

    int size;

} LinkedList;

LinkedList *createList();

void addData(LinkedList *list, int value);

void deleteList(LinkedList *list);

#endif //STUDY_LINKED_LIST_H
