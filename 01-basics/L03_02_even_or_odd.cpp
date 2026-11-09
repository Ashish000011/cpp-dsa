/*L03.02 Even or Odd: -3 → Odd. Trap: in C++, -3 % 2 is -1. So check n % 2 == 0, never n % 2 == 1.*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    if(a % 2 == 0){
        cout<< "Even" << endl;

    }
    else{
        cout << "Odd" << endl;
    }
}