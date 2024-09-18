#include <iostream>

using namespace std;

int main(){
    int x;
    int notes[] = {100,50,20,10,5,2,1};
    cin >> x;

    cout << x << endl;

    for(int i=0; i <= 6; i++){
        int notes_quantity = x/notes[i];
        cout << notes_quantity << " nota(s) de R$ " << notes[i] <<",00" << endl;
        x = x - (notes_quantity * notes[i]);
    }
   return 0;
}