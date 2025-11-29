#include <iostream>
#include <cstdlib> 
using namespace std;

struct linkedlist {
    int data;
    struct linkedlist *next;
    struct linkedlist *prev;
} *head, *p, *q;

void create(int n) {
    typedef struct linkedlist node;
    head = NULL;

    for (int i = 0; i < n; i++) {
        if (head == NULL) {
            p = (node*)malloc(sizeof(node));
            cin >> p->data;
            p->next = NULL;
            p->prev = NULL;
            head = p;
        } else {
            q = (node*)malloc(sizeof(node));
            cin >> q->data;
            q->prev = p;
            q->next = NULL;
            p->next = q;
            p = q;
        }
    }
}

void print() {
    p = head;
    while (p != NULL) { 
        cout << p->data << "-> ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter data: ";
    create(n);
    print();
    return 0;
}
