/*L02.08 Last Digit: 4729 → Last digit: 9 / Without it: 472*/

#include<iostream>
using namespace std;

int main(){
    int digit ;

    cin >> digit;
    cout<< "Last digit: " << digit % 10 << "\tWithout_it: " << digit /10<<endl;
}