#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                       // e.g. 5

    int neg = -n;                   // -5, stored in 4 bytes (32 bits)
    unsigned char last8 = neg;      // 1 byte: keeps only the last 8 bits, no sign
    cout << (int)last8 << endl;     // print it as a number, not a character

    return 0;
}