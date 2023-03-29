//
// Created by 陈海楠 on 2022/11/23.
//

#ifndef STUDY_LIST_H
#define STUDY_LIST_H

//struct Node {
//    struct Node *front;
//    struct Node *next;
//    int size;
//};

struct List {
    int size;
//    bool isEmpty;

    void (*input)();
};

#endif //STUDY_LIST_H
