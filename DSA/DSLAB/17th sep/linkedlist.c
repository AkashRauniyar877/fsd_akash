//wap to implement linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
} *head , *p, *b;
void create(int n) {
    head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    printf("Enter the data of node 1: ");
    scanf("%d", &head->data);
    p = head;
    for (int i = 2; i <= n; i++) {
        b = (struct Node*)malloc(sizeof(struct Node));
        b->next = NULL;
        printf("Enter the data of node %d: ", i);
        scanf("%d", &b->data);
        p->next = b;
        p = b;
    }
}
void display() {
    p = head;
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}
int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("The linked list is: ");
    display();
    return 0;
}
