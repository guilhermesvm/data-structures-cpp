#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[3];
    int orig[3];
    for(int i=0; i < 3; i++){
        cin >> arr[i];
        orig[i] = arr[i];
    }
    
    for(int i=0; i < 3-1;i++){
        for(int j=0; j < 3-1-i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for(int i=0;i < 3; i++){
        cout << arr[i] << endl;
    }
    
    cout << endl;
    
    for(int i=0;i < 3; i++){
        cout << orig[i] << endl;
    }
    return 0;
}