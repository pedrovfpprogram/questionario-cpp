int potencia(int base, int expoente){
    if (base == 0 ) return 0;
    if (expoente == 0) return 1;
    if (expoente == 1) return base;
    int resultado = base;
    for (int i = 2; i <= expoente; i++){
        resultado = resultado * base;
    }
    return resultado;
}