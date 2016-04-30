//
// Created by kuzon on 4/30/16.
//

#ifndef LIB_LIST_LIB_LIST_H
#define LIB_LIST_LIB_LIST_H

/* 程序的状态 */
typedef int Status;
/* 执行成功 */
#define OK 1
/* 是 */
#define TRUE 1
/* 否 */
#define FALSE 0
/* 执行错误 */
#define ERROR -1
/* 不允许的操作 */
#define INFEASIBLE -1

/* 线性表的动态分配顺序存储结构 */
#define LIST_INIT_SIZE 10 /* 线性表存储空间的初始分配量 */
#define LIST_INCREMENT 2 /* 线性表存储空间的分配增量 */

typedef long ElemType;

typedef struct {
    ElemType *elem;
    /* 存储空间基址 */
    int length;
    /* 当前长度 */
    int listsize; /* 当前分配的存储容量(以sizeof(ElemType)为单位) */
} SqList;

#endif //LIB_LIST_LIB_LIST_H
