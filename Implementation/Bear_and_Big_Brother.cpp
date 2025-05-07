#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int i = 0;
    while (b >= a){
        b = b*2;
        a = a*3;
        i++;
    }
    cout << i << endl;
    return 0;
}