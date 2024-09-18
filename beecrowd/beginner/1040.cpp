#include <bits/stdc++.h>

using namespace std;

int main() {
    float N1, N2, N3, N4, average;
    cin >> N1 >> N2 >> N3 >> N4;
    
    int weights = 2 + 3 + 4 + 1; 
    average = ((N1 * 2) + (N2 * 3) + (N3 *4) + (N4 * 1)) / weights;
    
    cout << "Media: " << fixed << setprecision(1) << average << endl;
    if(average >= 7.0){
        cout << "Aluno aprovado.\n";
    } else if(average < 5.0){
        cout << "Aluno reprovado.\n";
    } else {
        cout << "Aluno em exame.\n";
        float exam;
        cin >> exam;
        cout << "Nota do exame: " << fixed << setprecision(1) << exam << endl;
        
        average = (average + exam) / 2;
        
        if(average >= 5){
            cout << "Aluno aprovado.\n";
            cout << "Media final: " << fixed << setprecision(1) << average << endl;
        } else {
            cout << "Aluno reprovado.\n";
            cout << "Media final: " << fixed << setprecision(1) << average << endl;
        }
    }
    return 0;
}