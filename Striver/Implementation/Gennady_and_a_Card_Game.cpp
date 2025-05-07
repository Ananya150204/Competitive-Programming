#include <bits/stdc++.h>
using namespace std;

int main(){
    string table;
    cin >> table;
    //vector<string> hand;
    bool f = false;
    for (int i = 0; i < 5; i++){
        string hand;
        cin >> hand;
        if ((table[0] == hand[0]) || (table[1] == hand[1])){
            cout << "yes" << endl;
            f = true;
            break;
        }
    }
    if (!f){
        cout << "No" << endl;
    }
}