/*L03.04 Character Type: g → Lowercase. The other answers are Uppercase, Digit and Other. Use ASCII ranges like ch >= 'a' && ch <= 'z', no library functions.*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
    else {
        cout << "Other" << endl;
    }

    return 0;
}