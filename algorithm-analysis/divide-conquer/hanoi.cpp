#include <iostream>

using namespace std;

void torreHanoi(int n, char origem, char destino, char auxiliar){
    //Se tiver somente um pino -> Já move para o destino
    if(n == 1){
        cout << "Mova o disco 1 do pino " << origem << " para o pino " << destino << endl; 
        return;
    }
        
    //Mover a quantidade-1 da origem p/ o pino auxiliar, usando o pino de destino como aux
    torreHanoi(n-1, origem, auxiliar, destino);
    cout << "Mova o disco " << n << " do pino " << origem << " para o pino " << destino << endl;

    torreHanoi(n-1, auxiliar, destino, origem);


}

int main(){
    int n = 3; //numero de discos
    
    torreHanoi(n,'1','2','3');
    return 0;
}