#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    ll n;
    ll base = 5;  

    cin >> n; 

    int total = 0; 

    while(n / base){

        total += (n / base); 

        base = base * 5; 
        

    }

    cout << total << "\n"; 

    

}