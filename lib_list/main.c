//
// Created by kuzon on 4/30/16.
//

#include <stdio.h>
#include <stdlib.h>
#include "lib_list.h"
#include "lib_linkedList.h"

void runList() {
    SqList L;
    InitList(&L);
    ListInsert(&L, 1, 56);
    ListInsert(&L, 2, 34);
    ListInsert(&L, 3, 24);

    long e;
    ListDelete(&L, 2, &e);
    printf("表长度 --- %d", ListLength(L));
    printf("\r\n");
    printf("-----表内容-----");
    printf("\r\n");
    ListTraverse(L, show);
}

void runLinkedList() {

    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);
    insertFirst(4, 1);
    insertFirst(5, 40);
    insertFirst(6, 56);

    printf("Original List: ");

    //print list
    printList();

    while (!isEmpty()) {
        struct node *temp = deleteFirst();
        printf("\nDeleted value:");
        printf("(%d,%d) ", temp->key, temp->data);
    }

    printf("\nList after deleting all items: ");
    printList();
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);
    insertFirst(4, 1);
    insertFirst(5, 40);
    insertFirst(6, 56);
    printf("\nRestored List: ");
    printList();
    printf("\n");

    struct node *foundLink = find(4);

    if (foundLink != NULL) {
        printf("Element found: ");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    } else {
        printf("Element not found.");
    }

    delete(4);
    printf("List after deleting an item: ");
    printList();
    printf("\n");
    foundLink = find(4);

    if (foundLink != NULL) {
        printf("Element found: ");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    } else {
        printf("Element not found.");
    }

    printf("\n");
    sort();

    printf("List after sorting the data: ");
    printList();

    reverse(&head);
    printf("\nList after reversing the data: ");
    printList();
}

int main() {
//    runList();
    runLinkedList();
}
