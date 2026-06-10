#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    if (N < 1 || N > 100) return 0;
    for (int i = 1; i < 11; i++) {
        cout << N << "x" << i << "=" << N*i << endl;
    }

    return 0;
}