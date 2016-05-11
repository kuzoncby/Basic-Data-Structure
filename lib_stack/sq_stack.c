//
// Created by kuzon on 16-5-10.
//

/*
 * 这个程序使用C实现栈.
 * 栈是一种后进先出的数据结构
 * 栈的操作: PUSH(添加操作), POP(删除操作)
 * 以及显示.
 */
#include <stdio.h>
//栈的最大大小
#define MAXSIZE 5

//栈的结构
struct stack {
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

//添加操作
void push(void);

//删除操作
int pop(void);

//显示操作
void display(void);

//void main() {
//    int choice;
//    int option = 1;
//    s.top = -1;
//
//    printf("这是我所能做的\n");
//    while (option) {
//        printf("------------------------------------------\n");
//        printf("      1    -->    添加               \n");
//        printf("      2    -->    删除               \n");
//        printf("      3    -->    显示               \n");
//        printf("      4    -->    退出           \n");
//        printf("------------------------------------------\n");
//
//        printf("请做出选择\n");
//        scanf("%d", &choice);
//        switch (choice) {
//            case 1:
//                push();
//                break;
//            case 2:
//                pop();
//                break;
//            case 3:
//                display();
//                break;
//            case 4:
//                return;
//        }
//        fflush(stdin);
////        printf("您要继续吗(Yes/No)?\n");
////        scanf("%c", &option);
//        option = 1;
//    }
//}

/*  添加操作 */
void push() {
    int num;
    if (s.top == (MAXSIZE - 1)) {
        printf("我装不下啦\n");
        return;
    }
    else {
        printf("您要添加什么\n");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

/*  删除操作 */
int pop() {
    int num;
    if (s.top == -1) {
        printf("我是空的\n");
        return (s.top);
    }
    else {
        num = s.stk[s.top];
        printf("这就是您去掉的： %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return (num);
}

/*  显示操作 */
void display() {
    int i;
    if (s.top == -1) {
        printf("我是空的\n");
        return;
    }
    else {
        printf("\n这就是我现在的样子 \n");
        for (i = s.top; i >= 0; i--) {
            printf("|%d\t|%d\t|\n", i + 1, s.stk[i]);
        }
    }
    printf("\n");
}