//
// Created by kuzon on 4/30/16.
//

#include <stdio.h>
#include "lib_list.h"

int main() {
    SqList L;
    InitList(&L);
    ListInsert(&L, 1, 1);
    ListInsert(&L, 2, 2);
    ListInsert(&L, 3, 3);
//    for (long i = 1; i <= 10; i++) {
//        ListInsert(&L, i, i + 1);
//    }
    printf("表长度 --- %d", ListLength(L));
    printf("\r\n");
    printf("-----表内容-----");
    printf("\r\n");
    ListTraverse(L, show);
}
