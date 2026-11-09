/*L02.05 Celsius to Fahrenheit: use F = C × 9 / 5 + 32, with C as a double. 37 → 98.6
Then change the formula to (9 / 5) * c + 32. In a comment, explain why it now prints 69.*/

#include<iostream>
using namespace std;

int main(){
    double C;
    double F;

    cin  >>C;

    F = C*9/5 +32;

    cout << F << endl;

    // now changing the formula 
    cout<< (9/5)*C +32<< endl;
    // The brackets force 9/5 to be evaluated first. Since both 9 and 5 are integers, integer division occurs, giving 1 instead of 1.8

}