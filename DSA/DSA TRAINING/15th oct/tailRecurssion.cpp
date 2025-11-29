#include <iostream>
using namespace std;

int factorial_tail(int n, int acc = 1) {
    if (n == 0 || n == 1)
        return acc;
    return factorial_tail(n - 1, n * acc);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial_tail(num);
    return 0;
}
