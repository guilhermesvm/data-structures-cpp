#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 6;
    float nums[N];
    int positives = 0;
    
    for(int i=0; i < N; i++){
        cin >> nums[i];
        if(nums[i] > 0){
            positives++;
        }
    }
    cout << positives << " valores positivos" << endl;

    return 0;
}