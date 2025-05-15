#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
// Miller–Rabin bases for n < 2^64
static const ll MR_WITNESSES[] = {
    2LL, 325LL, 9375LL, 28178LL, 450775LL, 9780504LL, 1795265022LL
};
static const int MR_CNT = sizeof(MR_WITNESSES)/sizeof(MR_WITNESSES[0]);

// Small primes for quick checks
static const int SMALL_P[] = {2,3,5,7,11,13,17,19,23,29,31,37};
static const int SMALL_CNT = sizeof(SMALL_P)/sizeof(SMALL_P[0]);

// O(log b) modular multiply
ll mod_mul(ll a, ll b, ll m) {
    ll res = 0;
    a %= m;
    while (b > 0) {
        if (b & 1) {
            res += a;
            if (res >= m) res -= m;
        }
        a <<= 1;
        if (a >= m) a -= m;
        b >>= 1;
    }
    return res;
}

ll mod_pow(ll base, ll exp, ll m) {
    ll res = 1 % m;
    while (exp > 0) {
        if (exp & 1) res = mod_mul(res, base, m);
        base = mod_mul(base, base, m);
        exp >>= 1;
    }
    return res;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (int i = 0; i < SMALL_CNT; i++) {
        if (n == SMALL_P[i]) return true;
        if (n % SMALL_P[i] == 0) return false;
    }
    // Write n-1 = 2^s * m 
    ll d = n-1;
    ll s = 0;
    while((d&1) == 0){
        d >>= 1;
        s++;
    }
    for (int i = 0; i < MR_CNT; i++){
        ll a = MR_WITNESSES[i]%n;
        if (a==0)continue;
        ll num = mod_pow(a,d,n);
        if (num == 1 || num == n-1){
            continue;
        }
        bool comp = true;
        for (int r = 1; r < s; r++){
            num = mod_mul(num,num,n);
            if (num == n-1 || num == 1){
                comp = false;
                break;
            }
        }
        if (comp) return false;
    }
    return true;
}
void ak(){
    int n;
    cin >> n;
    if (n >= 1 && n <= 10){
        cout << n <<"\n";
    }
    else if (n < 20){
        cout << 10 << "\n";
    }
    else if (n < 30){
        cout << 11 << "\n";
    }
    else if (n < 40){
        cout << 12 << "\n";
    }
    else if (n < 50){
        cout << 13 << "\n";
    }
    else if (n < 60){
        cout << 14 << "\n";
    }
    else if (n < 70){
        cout << 15 << "\n";
    }
    else if (n < 80){
        cout << 16 << "\n";
    }
    else if (n < 90){
        cout << 17 << "\n";
    }
    else if (n < 100){
        cout << 18 << "\n";
    }
    else if (n < 200){
        cout << 19 << "\n";
    }
    else if (n < 300){
        cout << 20 << "\n";
    }
    else if (n < 400){
        cout << 21 << "\n";
    }
    else if (n < 500){
        cout << 22 << "\n";
    }
    else if (n < 600){
        cout << 23 << "\n";
    }
    else if (n < 700){
        cout << 24 << "\n";
    }
    else if (n < 800){
        cout << 25 << "\n";
    }
    else if (n < 900){
        cout << 26 << "\n";
    }
    else if (n < 1000){
        cout << 27 << "\n";
    }
    else if (n < 2000){
        cout << 28 << "\n";
    }
    else if (n < 3000){
        cout << 29 << "\n";
    }
    else if (n < 4000){
        cout << 30 << "\n";
    }
    else if (n < 5000){
        cout << 31 << "\n";
    }
    else if (n < 6000){
        cout << 32 << "\n";
    }
    else if (n < 7000){
        cout << 33 << "\n";
    }
    else if (n < 8000){
        cout << 34 << "\n";
    }
    else if (n < 9000){
        cout << 35 << "\n";
    }
    else if (n < 10000){
        cout << 36 << "\n";
    }
    else if (n < 20000){
        cout << 37 << "\n";
    }
    else if (n < 30000){
        cout << 38 << "\n";
    }
    else if (n < 40000){
        cout << 39 << "\n";
    }
    else if (n < 50000){
        cout << 40 << "\n";
    }
    else if (n < 60000){
        cout << 41 << "\n";
    }
    else if (n < 70000){
        cout << 42 << "\n";
    }
    else if (n < 80000){
        cout << 43 << "\n";
    }
    else if (n < 90000){
        cout << 44 << "\n";
    }
    else if (n < 100000){
        cout << 45 << "\n";
    }
    else if (n < 200000){
        cout << 46 << "\n";
    }
    else if (n < 300000){
        cout << 47 << "\n";
    }
    else if (n < 400000){
        cout << 48 << "\n";
    }
    else if (n < 500000){
        cout << 49 << "\n";
    }
    else if (n < 600000){
        cout << 50 << "\n";
    }
    else if (n < 700000){
        cout << 51 << "\n";
    }
    else if (n < 800000){
        cout << 52 << "\n";
    }
    else if (n < 900000){
        cout << 53 << "\n";
    }
    else {
        cout << 54 <<"\n";
    }
}
int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        ak();
    }
}
