typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

ll findRow(ll r ){

    if(r & 1){

        return findRow(r - 1) + 1; 

    }

    return r * r; 

}

ll findCol(ll c){

    if(c & 1){

        return c * c; 

    }

    return findCol(c - 1)  + 1; 

}

ll findGrid(ll r, ll c){

    ll curr = 0; 

    if(r > c){

        curr = findRow(r); 

        if(r & 1){

            return curr + (c - 1);

        }

        else{

            return curr - (c - 1); 

        }


    }

    else{

        curr = findCol(c); 

        if(c & 1){

            return curr - (r - 1); 

        }

        else{

            return curr + (r - 1);

        }

        

    }

    return curr; 

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 


    int testCases = 0; 

    ll row , col; 

    cin >> testCases; 

    while(testCases--){

        cin >> row;
        cin >> col; 


        cout << findGrid(row , col) << "\n"; 

    }

    return 0; 


}