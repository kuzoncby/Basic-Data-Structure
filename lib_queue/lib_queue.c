/*
 ============================================================================
 Name        : lib_queue.c
 Author      : Kuzon Chen
 Version     : 2016-5-11
 Copyright   : MIT
 Description : 队列 - 链表实现
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

// 定义节点
struct Node {
    int data;
    struct Node *next;
};
// 定义队首
struct Node *front = NULL;
// 定义队尾
struct Node *rear = NULL;

// 入队
void EnQueue(int x) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

// 出队
void DeQueue() {
    struct Node *temp = front;
    if (front == NULL) {
        printf("我是空的\n");
        return;
    }
    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    free(temp);
}

int Front() {
    if (front == NULL) {
        printf("我是空的\n");
        return -1;
    }
    return front->data;
}

void Print() {
    struct Node *temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    /* 测试结果  */
    // 每次操作过后显示结果
    EnQueue(2);
    Print();
    EnQueue(4);
    Print();
    EnQueue(6);
    Print();
    DeQueue();
    Print();
    EnQueue(8);
    Print();
    DeQueue();
    Print();
}
