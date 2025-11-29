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

void push(Stack &s, char x) {
    if (s.top == 99)
        cout << "Stack Overflow\n";
    else
        s.items[++s.top] = x;
}

char pop(Stack &s) {
    if (s.top == -1)
        return '\0';  
    else
        return s.items[s.top--];
}
char peek(Stack &s) {
    if (s.top == -1)
        return '\0';
    return s.items[s.top];
}

bool isBalanced(char expr[]) {
    Stack s;
    init(s);
    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(s, ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char top = pop(s);
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return (s.top == -1); 
}

// Main function
int main() {
    char expr[100];
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced Parentheses\n";
    else
        cout << "Unbalanced Parentheses\n";

    return 0;
}
