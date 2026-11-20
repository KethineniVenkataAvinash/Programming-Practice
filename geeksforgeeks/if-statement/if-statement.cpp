#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string num = "Number";
    string big = "Big";
    if (n<=100){
        cout << num;
    } else {
        cout << big <<"\n"<< num;
    }
    return 0;
}