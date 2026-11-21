#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char s[] = "Unknown";

    switch(n){
        case 1:
        cout<< "Stop";
        break;
        case 2:
        cout<< "Standby";
        break;
        case 3:
        cout<< "Go";
        break;
        default:
        cout<< s;
    }
    

    return 0;
}