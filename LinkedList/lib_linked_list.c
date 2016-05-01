//
// Created by kuzon on 5/1/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 结点的结构 */
struct node {
    int data;
    int key;
    struct node *next;
};

/* 指向表头 */
struct node *head = NULL;
/* 指向当前位置 */
struct node *current = NULL;

/*
 * 显示表内容
 */
void display() {
    struct node *ptr = head;
    printf("\n[ ");

    //从第一个开始
    while (ptr != NULL) {
        printf("(%d,%d) ", ptr->key, ptr->data);
        ptr = ptr->next;
    }

    printf(" ]");
}

/*
 * 插入表
 */
void insert(int key, int data) {
    //创建表
    struct node *link = (struct node *) malloc(sizeof(struct node));

    link->key = key;
    link->data = data;

    //设置为头结点
    link->next = head;
    head = link;
}

/*
 * 删除第一个结点
 */
struct node *deleteFirst() {

    //存储剩余部分
    struct node *tempLink = head;

    //头指针指向下一个
    head = head->next;

    //返回结果
    return tempLink;
}

/*
 * 判断为空
 */
bool isEmpty() {
    return head == NULL;
}

/*
 * 获得表长度
 */
int length() {
    int length = 0;
    struct node *current;

    for (current = head; current != NULL; current = current->next) {
        length++;
    }

    return length;
}

/*
 * 查找结点
 */
struct node *find(int key) {

    //从第一个开始
    struct node *current = head;

    //判断为空
    if (head == NULL) {
        return NULL;
    }

    //编历表
    while (current->key != key) {

        //没找到的情况
        if (current->next == NULL) {
            return NULL;
        } else {
            //对下一个结点搜索
            current = current->next;
        }
    }

    //返回结果
    return current;
}

//删除结点
struct node *delete(int key) {

    //从第一个开始
    struct node *current = head;
    struct node *previous = NULL;

    //判断为空
    if (head == NULL) {
        return NULL;
    }

    //编历表
    while (current->key != key) {

        //没找到的情况
        if (current->next == NULL) {
            return NULL;
        } else {
            //搜索下一个
            previous = current;
            current = current->next;
        }

    }

    //删除的是首结点
    if (current == head) {
        head = head->next;
    } else {
        //删除结点指针
        previous->next = current->next;
    }

    return current;
}

/*
 * 结点排序
 */
void sort() {

    int i, j, k, tempKey, tempData;
    struct node *current;
    struct node *next;

    int size = length();
    k = size;

    for (i = 0; i < size - 1; i++, k--) {
        current = head;
        next = head->next;

        for (j = 1; j < k; j++) {

            if (current->data > next->data) {
                tempData = current->data;
                current->data = next->data;
                next->data = tempData;

                tempKey = current->key;
                current->key = next->key;
                next->key = tempKey;
            }

            current = current->next;
            next = next->next;
        }
    }
}

/*
 * 倒置表
 */
void reverse(struct node **head_ref) {
    struct node *prev = NULL;
    struct node *current = *head_ref;
    struct node *next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head_ref = prev;
}

main() {

    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(4, 1);
    insert(5, 40);
    insert(6, 56);

    printf("初始的表内容：");

    //print list
    display();

    while (!isEmpty()) {
        struct node *temp = deleteFirst();
        printf("\n删除：");
        printf("(%d,%d) ", temp->key, temp->data);
    }

    printf("\n删除后的表内容：");
    display();
    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(4, 1);
    insert(5, 40);
    insert(6, 56);
    printf("\n修改后的表内容：");
    display();
    printf("\n");

    struct node *foundLink = find(4);

    if (foundLink != NULL) {
        printf("找到！");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    } else {
        printf("没找到！");
    }

    delete(4);
    printf("删除后的内容：");
    display();
    printf("\n");
    foundLink = find(4);

    if (foundLink != NULL) {
        printf("找到！");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    } else {
        printf("没找到！");
    }

    printf("\n");
    sort();

    printf("排序后：");
    display();

    reverse(&head);
    printf("\n倒置后：");
    display();
}