#include <iostream>
using namespace std;
#include "potencia.hpp"

int main(){

    char N[] = "153";
    int total = 0;
    for (int i = 0; N[i] != '\0';i++) {
        total += i;
    }
    cout << total << endl;


    return 0;
}