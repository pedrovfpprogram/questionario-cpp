#include <iostream>
using namespace std;

int main(){

    int A;
    cin >> A;
    if (A < 1 || A > 100000) return 0;
    if (A%4 == 0) {
        if (A%100 != 0) {
            if (A%400 != 0) {
                cout << "BISSEXTO" << endl;
                return 0;
            }
        }
    }
    cout << "COMUM" << endl;

    return 0;
}