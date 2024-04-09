//https://www.beecrowd.com.br/judge/pt/problems/view/1048

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, percentual, reajuste, novoSalario;
    cin >> salario;
    
    if(salario < 400.00){
        percentual = 15;
    } else if(salario <= 800.00){
        percentual = 12;
    } else if(salario <= 1200.00){
        percentual = 10;
    } else if(salario <= 2000.00){
        percentual = 7;
    }else{
        percentual = 4;
    }

    reajuste = salario * (percentual/100);
    novoSalario = salario + reajuste;

    cout << "Novo salario: " << setprecision(2) << fixed << novoSalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << setprecision(0) << fixed <<  percentual << "%" << endl;
    return 0;
}