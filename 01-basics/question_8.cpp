/*L02.09 Swap Without a Third Variable: use only + and −. 3 9 → 9 3*/

#include<iostream>
using namespace std;

int main(){
    int a , b;

    cin >> a >> b;
    a = a+b;
    b = a-b;
    a = a-b;

    cout <<"a: " << a << "\tb: " << b << endl;
}