#include <bits/stdc++.h>
using namespace std;

#define ll long long

void diwan(){
    int sum = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            char c;
            cin >> c;
            if (c != '.'){
                if (i == 0 || i == 9){
                    sum += 1;
                }
                else if (j == 0 || j == 9){
                    sum += 1;
                }
                else if (i == 1 || i == 8){
                    sum += 2;
                }
                else if (j == 1 || j == 8)
                    sum += 2;
                else if (i == 2 || i == 7){
                    sum += 3;
                }
                else if (j == 2 || j == 7){
                    sum += 3;
                }
                else if (i == 3 || i == 6){
                    sum += 4;
                }
                else if (j == 3 || j == 6){
                    sum += 4;
                }
                else if (i == 4 || i == 5){
                    sum += 5;
                }
                else if (j == 4 || j == 5){
                    sum += 5;
                }
                //cout << sum << " ";
            }
        }
        //cout << endl;
    }
    //cout << endl;
    cout << sum << endl;
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        diwan();
    }
}
