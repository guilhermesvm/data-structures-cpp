#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, Y, ans;
    cin >> X >> Y;

    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

    if(X == Y){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    } else if(X > Y){
        int count = 0;
        for(int i= nums[X]; i < nums.size()-1; i++){
            count++;
        }

        ans = count + Y + 1;
        cout << "O JOGO DUROU " << ans << " HORA(S)" << endl;
    } else if(X < Y) {
        int count2 = 0;
        
        for(int i = nums[X]; i < nums[Y]; i++){
            count2++;
        }

        cout << "O JOGO DUROU " << count2 << " HORA(S)" << endl;
    }
    
    return 0;