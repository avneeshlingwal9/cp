#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    // So, if n is even => n = n / 2. 
    // if n is odd => n = 3*n + 1 
    // repeat until n is 1. 

    long long n ; 

    cin >> n; 

    cout << n << " "; 

    while(n != 1){

        if(n & 1){

            n = 3 * n + 1; 
        }

        else{

            n = n / 2; 

        }

        cout << n << " "; 



    }



}