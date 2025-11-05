typedef long long ll; 
#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 

    cin >> n; 

    if(n == 1){

        cout << n << " ";
        return 0; 

    }

    if(n <= 3){

        cout << "NO SOLUTION" << "\n"; 

    }

    else{

        for(int i = 1 ; i <= n ; i++){

            if((i & 1) == 0){

                cout << i << " "; 

            }

        }

        for(int i = 1; i <= n; i++){

            if(i & 1){

                cout << i << " "; 

            }

        }

    }



}