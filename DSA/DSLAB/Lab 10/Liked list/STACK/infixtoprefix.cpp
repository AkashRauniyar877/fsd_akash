#include <iostream>
#include <cstring>
using namespace std;

struct Stack {
    char items[100];
    int top;
};

void init(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack &s) {
    return s.top == -1;
}

void push(Stack &s, char x) {
    s.items[++s.top] = x;
}

char pop(Stack &s) {
    if (isEmpty(s))
        return '\0';
    else
        return s.items[s.top--];
}

char peek(Stack &s) {
    if (isEmpty(s))
        return '\0';
    else
        return s.items[s.top];
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void reverse(char *exp) {
    int n = strlen(exp);
    for (int i = 0; i < n / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[n - i - 1];
        exp[n - i - 1] = temp;
    }
}

void infixToPrefix(char infix[], char prefix[]) {
    Stack s;
    init(s);
    reverse(infix);
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            prefix[j++] = ch;
        } else if (ch == ')') {
            push(s, ch);
        } else if (ch == '(') {
            while (!isEmpty(s) && peek(s) != ')') {
                prefix[j++] = pop(s);
            }
            pop(s);
        } else if (isOperator(ch)) {
            while (!isEmpty(s) && precedence(peek(s)) > precedence(ch)) {
                prefix[j++] = pop(s);
            }
            push(s, ch);
        }
    }

    while (!isEmpty(s)) {
        prefix[j++] = pop(s);
    }

    prefix[j] = '\0';
    reverse(prefix);
}

int main() {
    char infix[100], prefix[100];
    cout << "Enter infix expression: ";
    cin >> infix;
    infixToPrefix(infix, prefix);
    cout << "Prefix expression: " << prefix;
    return 0;
}
