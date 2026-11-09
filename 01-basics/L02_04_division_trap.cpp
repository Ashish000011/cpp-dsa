/*L02.04 Division Trap: 7 2 → Integer division: 3 / Remainder: 1 / Real division: 3.5*/

#include<iostream>
using namespace std;

int main(){
    int a = 7 ;
    int b = 2 ;
    
    

    cout <<"Integer division: " << a/b << endl;
    cout <<"Remainder: " << a%b << endl;
    cout <<"Real division: "<< (float)a/b << endl;
}
