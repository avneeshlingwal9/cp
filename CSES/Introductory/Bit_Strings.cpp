#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

const int MOD = 1000000007;

ll mod_exponentiation(ll raise){

    ll res = 1; 

    ll base = 2; 

    while(raise > 0){

        if(raise & 1){

            res = (res * base) % MOD; 

        }

        raise /= 2; 
        base = (base * base) % MOD;

    }

    return res; 


}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int num; 

    cin >> num; 


    cout << mod_exponentiation(num); 

}