#include <iostream>
#include <cstdlib>  
using namespace std;

struct linkedlist {
    int data;
    struct linkedlist *next;
} *head, *p, *q;

void create(int n) {
    typedef struct linkedlist node;
    head = NULL;
    for (int i = 0; i < n; i++) {
        if (head == NULL) {
            p = (node*)malloc(sizeof(node));
            cin >> p->data;
            p->next = p;   
            head = p;
        } else {
            q = (node*)malloc(sizeof(node));
            cin >> q->data;
            q->next = head; 
            p->next = q;    
            p = q;       
        }
    }
}

void print() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    p = head;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);  
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter data: ";
    create(n);
    cout << "Circular linked list: ";
    print();
    return 0;
}
