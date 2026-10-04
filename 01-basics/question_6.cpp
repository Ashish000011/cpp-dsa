/*L02.07 Seconds Split: use only / and %. 3725 → 1 h 2 min 5 s*/

#include<iostream>
using namespace std;

int main(){
    int seconds , hours , mins ;

    cin >> seconds;

    mins = seconds/60;
    seconds = seconds%60;
    hours = mins/60;
    mins= mins%60;

    cout << hours << " h\t" << mins << " min\t" << seconds << " s\n" << endl;
}