#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n ; 

    cin >> n; 

    int XOR = 0; 

    int curr; 

    for(int i = 0; i < n - 1; i++){

        cin >> curr; 

        XOR ^= curr; 


    }


    for(int i = 1; i <= n ; i++){

        XOR ^= i; 

    }

    cout << XOR << "\n"; 

}