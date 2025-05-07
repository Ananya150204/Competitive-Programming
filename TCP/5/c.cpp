#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int temp;
        cin >> temp;
        // s = "";
        
        int times = ceil(1.0*temp/5);
        //int times = n/5;
        if (temp%5 == 0){
            for (int i = 0; i < times; i++){
                cout <<'a';
            }
            for (int i = 0; i < times; i++){
                cout <<'e';
            }
            for (int i = 0; i < times; i++){
                cout <<'i';
            }
            for (int i = 0; i < times; i++){
                cout <<'o';
            }
            for (int i = 0; i < times; i++){
                cout <<'u';
            }
        }
        if (temp%5==1){
            for (int i = 0; i < times; i++){
                cout <<'a';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'e';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'i';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'o';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'u';
            }
        }
        else if (temp%5==2){
            for (int i = 0; i < times; i++){
                cout <<'a';
            }
            for (int i = 0; i < times; i++){
                cout <<'e';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'i';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'o';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'u';
            }
        }
        else if (temp%5==3){
            for (int i = 0; i < times; i++){
                cout <<'a';
            }
            for (int i = 0; i < times; i++){
                cout <<'e';
            }
            for (int i = 0; i < times; i++){
                cout <<'i';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'o';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'u';
            }
        }
        else if (temp%5==4){
            for (int i = 0; i < times; i++){
                cout <<'a';
            }
            for (int i = 0; i < times; i++){
                cout <<'e';
            }
            for (int i = 0; i < times; i++){
                cout <<'i';
            }
            for (int i = 0; i < times; i++){
                cout <<'o';
            }
            for (int i = 0; i < times-1; i++){
                cout <<'u';
            }
        }
        cout << endl;
    }
}