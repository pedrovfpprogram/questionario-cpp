#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    if (N < 1 || N > 20) return 0;
    unsigned int fatorial = 1;
    for (int i = 1; i <= N; i++) {
        fatorial = fatorial * i;
    }
    cout << fatorial << endl;
    return 0;
}