#include <iostream>
using namespace std;
struct Node {
    int coeff;
    int pow;
    struct Node* next;
} *head1, *head2, *head3, *p, *q, *r;

void create1(int n) {
    head1 = NULL;
    for (int i = 0; i < n; i++) {
        p = new Node;
        cin >> p->coeff >> p->pow;
        p->next = NULL;
        if (head1 == NULL) {
            head1 = p;
        } else {
            q = head1;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
    }
}

void create2(int n) {
    head2 = NULL;
    for (int i = 0; i < n; i++) {
        p = new Node;
        cin >> p->coeff >> p->pow;
        p->next = NULL;
        if (head2 == NULL) {
            head2 = p;
        } else {
            q = head2;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = p;
        }
    }
}

void addPolynomials() {
    p = head1;
    q = head2;
    while (p != NULL && q != NULL) {
        if (p->pow == q->pow) {
            r = new Node;
            r->coeff = p->coeff + q->coeff;
            r->pow = p->pow;
            r->next = NULL;
            if (head3 == NULL) {
                head3 = r;
            } else {
                Node* temp = head3;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = r;
            }
            p = p->next;
            q = q->next;
        } else if (p->pow > q->pow) {
            r = new Node;
            r->coeff = p->coeff;
            r->pow = p->pow;
            r->next = NULL;
            if (head3 == NULL) {
                head3 = r;
            } else {
                Node* temp = head3;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = r;
            }
            p = p->next;
        } else {
            r = new Node;
            r->coeff = q->coeff;
            r->pow = q->pow;
            r->next = NULL;
            if (head3 == NULL) {
                head3 = r;
            } else {
                Node* temp = head3;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = r;
            }
            q = q->next;
        }
    }
    while (p != NULL) {
        r = new Node;
        r->coeff = p->coeff;
        r->pow = p->pow;
        r->next = NULL;
        if (head3 == NULL) {
            head3 = r;
        } else {
            Node* temp = head3;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = r;
        }
        p = p->next;
    }
    while (q != NULL) {
        r = new Node;
        r->coeff = q->coeff;
        r->pow = q->pow;
        r->next = NULL;
        if (head3 == NULL) {
            head3 = r;
        } else {
            Node* temp = head3;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = r;
        }
        q = q->next;
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->coeff << "x^" << head->pow;
        head = head->next;
        if (head != NULL) {
            cout << " + ";
        }
    }
    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Enter the number of terms in polynomial 1: ";
    cin >> n1;
    create1(n1);
    cout << "Enter the number of terms in polynomial 2: ";
    cin >> n2;
    create2(n2);
    addPolynomials();
    cout << "Sum of polynomials: ";
    display(head3);
    return 0;
}