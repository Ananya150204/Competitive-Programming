#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    
    cin >> s;
    //cout << 5;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    
    string numbers = "";
    for (char c : s){
        if (c != '+'){
            numbers += c;
        }
    }
    sort(numbers.begin(),numbers.end());

    for (int i = 0; i < numbers.size()-1; i++){
        cout << numbers[i];
        cout << '+';
    }
    if (numbers.size() >= 1){
        cout << numbers[numbers.size()-1];
    }
}