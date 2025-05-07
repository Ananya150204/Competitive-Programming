#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = -1;
    int y = -1;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int a;
            cin >> a;
            if (a == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x-2) + abs(y-2) << endl;
    return 0;
}