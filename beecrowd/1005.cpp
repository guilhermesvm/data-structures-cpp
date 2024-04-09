//https://www.beecrowd.com.br/judge/pt/problems/view/1005

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A, B, media;
    cin >> A >> B;
    
    media = (3.5 * A + 7.5 * B)/11.0;

    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;

    return 0;
}