#include <iostream>
using namespace std;
int main () {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase consonant." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase consonant." << endl;
    } else {
        cout << ch << " is not a consonant." << endl;
    }

    return 0;
}