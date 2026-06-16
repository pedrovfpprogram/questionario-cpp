#include <iostream>
#include <string>

using namespace std;

int main() {
    long long n;
    if (cin >> n) {
        string s = to_string(n);
        cout << s.length() << endl;
    }

    return 0;
}
