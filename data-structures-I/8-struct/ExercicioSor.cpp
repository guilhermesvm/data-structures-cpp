#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct veiculo{
    string modelo;
    double valor;
    int ano;
    string status;

   void imprimir(){       
         cout << setw(20) << setfill(' ') << left <<  modelo << " "
             << setw(4) << left << ano << " "
             << setw(10)  <<  right << fixed << setprecision(2) << valor << " "
             << setw(15) << setfill(' ') << left << status << " " << endl;     
    } 

    void estoque(){
        if(status == "Estoque")
         cout << setw(20) << setfill(' ') << left <<  modelo << " "
             << setw(4) << left << ano << " "
             << setw(10)  <<  right << fixed << setprecision(2) << valor << " "
             << setw(15) << setfill(' ') << left << status << " " << endl;     
    } 
};

const int NVEI = 5;

bool cmp(const veiculo &v1, const veiculo &v2){

    return
        (v1.valor < v2.valor) ||
        (v1.valor == v2.valor  && v1.ano < v2.ano) ||
        (v1.valor == v2.valor  && v1.ano == v2.ano && v1.modelo < v2.modelo);
}


int main(){
    
    veiculo veiculos[NVEI]{
        {"GOL",12000.00,2005,"Estoque"},
        {"UNO",10000.00,2005,"Estoque"},
        {"CELTA",12000.00,2006,"Vendido"},
        {"AGILE",12000.00,2005,"Estoque"},
        {"CORSA",13000.00,2005,"Estoque"}
    
    };
    int option = 999;    

    do{
        cout << "Selecione a sua opcao: \n";        
        cout << "1 - Para exibir o Estoque \n";
        cout << "2 - Exibir todos os Veiculos  \n";
        cout << "3 - Para alterar o valor de um veiculo \n";
        cout << "4 - Reordenar \n";
        cout << "5 - Vender \n";        
        cout << "0 - Sair \n";

        cin >> option;
        switch (option)
        {
            case 1:
                for (int i = 0; i < NVEI; i++)
                {
                    veiculos[i].estoque();
                }
                break;

            case 2:
                for (int i = 0; i < NVEI; i++)
                {
                    veiculos[i].imprimir();
                }
                break;
            
            
             case 3:
                cout << "Qual veiculo voce deseja alterar o valor? - Digite o indice\n";       
                for (int i = 0; i < NVEI; i++)
                {
                    veiculos[i].imprimir();
                }         
                int indice;            
                cin >> indice;
                cout << "Qual eh o novo valor deste veiculo?\n";
                cin >> veiculos[indice].valor;              

                break;

             case 4:
                sort(veiculos,veiculos + NVEI, cmp);
                break;

             case 5:

                cout << "Qual veiculo voce deseja vender? - Digite o indice\n";       
                for (int i = 0; i < NVEI; i++)
                {
                    veiculos[i].imprimir();
                }         
              
                cin >> indice;
                cout << "Qual eh o novo valor deste veiculo? \n";
                veiculos[indice].status = "Vendido";        
                break;

            case 0 :
                break;
        default:
            break;
        }

    }while(option != 0);

    
    

    return 0;
}