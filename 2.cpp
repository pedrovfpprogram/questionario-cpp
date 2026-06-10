#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    if (a < -1000000000 || a > 1000000000 || b < -1000000000 || b > 1000000000 || c < -1000000000 || c > 1000000000) return 0;
    if (a > b && a > c) {
        cout << a << endl;
    } else if (b > a && b > c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}