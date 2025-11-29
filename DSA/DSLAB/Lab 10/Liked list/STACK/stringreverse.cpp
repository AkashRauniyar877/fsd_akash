// wap reverse a string using stack
#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>
using namespace std;
#define MAX 20
int top=-1;
char STACK[MAX];
void push(char c) {
    if(top == MAX-1) {
        cout << "Stack Overflow" << endl;
        exit(1);
    }
    STACK[++top] = c;
}
char pop() {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    return STACK[top--];
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for(int i=0; i<str.length(); i++) {
        push(str[i]);
    }
    cout << "Reversed string: ";
    while(top != -1) {
        cout << pop();
    }
    cout << endl;
    return 0;
}