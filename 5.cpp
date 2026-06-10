#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    if (N < 1 || N > 1000000000) return 0;
    int soma = 0;
    for (int i = 1; i <= N; i++){
        soma += i;
    }
    cout << soma << endl;
    return 0;
}