#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct Node {
    int data;
    struct Node* next;
} Node;

/**
 * @brief insert or create a node
 *
 * @param el
 * @param l
 * @return Node*
 */
Node* insert(int el, Node* l) {
    Node* node;
    node = (struct Node*)malloc(sizeof(struct Node));

    node->data = el;
    node->next = l;

    return (Node*) node;
}

/**
 * @brief print a list data structure
 *
 * @param n
 */
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

/**
 * @brief List test case
 */
void list() {
  printf("Single case ;\n");
  Node* head = insert(2, NULL);
  printList(head);
  free(head);

  printf("\nMultiple case ;\n");
  Node* head2 = insert(2, insert(3, insert(2, NULL)));
  printList(head2);
  free(head2);
}

#endif
