/*L02.02 Size Chart: print the size of each type. Output (64-bit): int: 4 / char: 1 / bool: 1 / float: 4 / double: 8 / long long: 8*/

#include<iostream>
using namespace std;

int main(){

    int n;
    char ch;
    bool a;
    float f;
    double d;
    long long int ll;

    cout << "int : "<<sizeof(n) <<"\n"<< endl;
    cout << "char : "<<sizeof(ch) <<"\n"<<  endl;
    cout << "bool : "<<sizeof(a) << "\n"<< endl;
    cout << "float : "<<sizeof(f) << "\n"<<endl;
    cout << "double : "<<sizeof(d) <<"\n"<< endl;
    cout << "long long : "<<sizeof(ll) << "\n"<< endl;

}