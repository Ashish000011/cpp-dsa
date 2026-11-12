#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int largest;

    cin >> a >> b >> c;

    cout << a << " " << b << " " << c << endl;

    if (a >= b && a >= c) {

        if (a == b && a == c) {
            cout << "a, b and c are same, and largest too!!" << endl;
        }
        else if (a == b) {
            cout << "a and b are same, and largest too!!" << endl;
        }
        else if (a == c) {
            cout << "a and c are same, and largest too!!" << endl;
        }
        else {
            cout << "a is largest" << endl;
        }
    }

    else if (b >= a && b >= c) {

        if (b == a && b == c) {
            cout << "a, b and c are same, and largest too!!" << endl;
        }
        else if (b == a) {
            cout << "b and a are same, and largest too!!" << endl;
        }
        else if (b == c) {
            cout << "b and c are same, and largest too!!" << endl;
        }
        else {
            cout << "b is largest" << endl;
        }
    }

    else {
        cout << "c is largest" << endl;
    }

    return 0;
}