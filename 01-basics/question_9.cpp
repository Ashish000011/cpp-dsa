/*L02.11 Logic Gates: read age and hasID (0 or 1). Print age >= 18 && hasID, then age >= 18 || hasID, then !hasID. 20 0 → AND: 0 / OR: 1 / NOT hasID: 1. These are your DLCO gates, written in code.*/

#include<iostream>
using namespace std;
int main(){
    int age;
    bool hasID;

    cin >> age >> hasID;
    cout << (age >= 18  && hasID) << endl;
    cout << (age >= 18 || hasID) << endl;
    cout << (!hasID) << endl;
    

}