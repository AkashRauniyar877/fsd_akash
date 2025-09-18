// wap to convert decimal to binary using stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
void decimalToBinary(int n) {
    while (n > 0) {
        push(n % 2);
        n = n / 2;
    }
    printf("Binary: ");
    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}