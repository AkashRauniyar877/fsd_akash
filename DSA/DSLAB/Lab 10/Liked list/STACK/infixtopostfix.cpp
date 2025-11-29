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
    if (s.top == 99)
        cout << "Stack Overflow\n";
    else
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


int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}


bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

void infixToPostfix(char infix[], char postfix[]) {
    Stack s;
    init(s);
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        }

        else if (ch == '(') {
            push(s, ch);
        }

        else if (ch == ')') {
            while (!isEmpty(s) && peek(s) != '(') {
                postfix[j++] = pop(s);
            }
            pop(s); 
        }

        else if (isOperator(ch)) {
            while (!isEmpty(s) && precedence(peek(s)) >= precedence(ch)) {
                postfix[j++] = pop(s);
            }
            push(s, ch);
        }
    }

    while (!isEmpty(s)) {
        postfix[j++] = pop(s);
    }

    postfix[j] = '\0'; 
}

int main() {
    char infix[100], postfix[100];
    cout << "Enter infix expression: ";
    cin >> infix;

    infixToPostfix(infix, postfix);

    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
