#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long sum = 0;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if (str == "Tetrahedron"){
            sum += 4;
        }
        else if (str == "Cube"){
            sum += 6;
        }
        else if (str == "Octahedron"){
            sum += 8;
        }
        else if (str == "Dodecahedron"){
            sum += 12;
        }
        else {
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}