#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    if (N < 0) cout << "NEGATIVO" << endl;
    if (N > 0) cout << "POSITIVO" << endl;
    if (N == 0) cout << "ZERO" << endl; 

    return 0;
}