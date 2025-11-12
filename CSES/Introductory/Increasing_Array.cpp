typedef long long ll; 
#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll opr = 0; 

    int n ; 

    cin >> n; 

    int prev = 0; 

    cin >> prev; 

    int curr = 0; 

    for(int i = 0 ; i < n - 1; i++){

        cin >> curr; 

        if(prev > curr){

            opr += (prev - curr); 

        }

        prev = max(curr , prev); 

    }

    cout << opr << "\n"; 



}