/*L02.06 ASCII Explorer: read an uppercase letter. Get the lowercase by adding 32, no library functions. A → ASCII: 65 / Next: B / Lowercase: a*/

#include<iostream>
using namespace std;

int main(){

    // it only works when input is in uppercase
    char ch;

    cin >> ch;
    cout << "Next: "<< char(int(ch+1)) <<endl;
    cout << "Lowercase: "<<char(int(ch+32)) << endl;
}