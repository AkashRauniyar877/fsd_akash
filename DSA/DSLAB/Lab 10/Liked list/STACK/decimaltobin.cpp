#include <iostream>
using namespace std;

struct Stack {
    int items[100];
    int top;
};

void init(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack &s) {
    return s.top == -1;
}

void push(Stack &s, int x) {
    s.items[++s.top] = x;
}

int pop(Stack &s) {
    if (isEmpty(s))
        return -1;
    else
        return s.items[s.top--];
}

void decimalToBinary(int num) {
    Stack s;
    init(s);

    while (num > 0) {
        int rem = num % 2;
        push(s, rem);
        num = num / 2;
    }

    cout << "Binary equivalent: ";
    while (!isEmpty(s)) {
        cout << pop(s);
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    decimalToBinary(num);
    return 0;
}

