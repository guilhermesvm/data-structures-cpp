int somar(int x, int y){
    int t = x + y;
    return t;
}

int subtracao(int x, int y){
    return x-y;
}

int multiplicacao(int x, int y){
    return x*y;
}

int divisao(int x, int y){
    return x/y;
}

int fatorial(int num){
    int aux = 1;
    for(int i=2; i<=num; i++){
        aux *= i; //aux = aux * i
    }
    return aux;
}

// Numero é primo somente se for divisível por 1 e ele mesmo
bool numero_primo(int num){
    int cont = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            cont++;
        }
    }
    return cont==2;

    /*if (cont == 2){
        retun true;
    }else{
        return false;
    }*/

}