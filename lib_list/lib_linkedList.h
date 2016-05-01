//
// Created by kuzon on 5/1/16.
//

#include <stdbool.h>

#ifndef LIB_LIST_LIB_LINKEDLIST_H
#define LIB_LIST_LIB_LINKEDLIST_H

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
#define LIST_INIT_SIZE 10 /* 线性表结点数目初始分配量 */
#define LIST_INCREMENT 2 /* 线性表结点大小 */

/* 结点结构 */
struct node {
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList();

void insertFirst(int key, int data);

struct node *deleteFirst();

bool isEmpty();

int length();

struct node *find(int key);

struct node *delete(int key);

void sort();

void reverse(struct node **head_ref);

#endif //LIB_LIST_LIB_LINKEDLIST_H
