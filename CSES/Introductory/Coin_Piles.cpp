#include <bits/stdc++.h>
using namespace std;
bool can_empty(int a , int b){

    if(b > a){

        return can_empty(b, a); 

    }
    

    if((b * 2 >= a) && (a + b) % 3 == 0){

        return true;

    }



    return false; 

}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 

    cin >> t; 

    int a , b; 

    for(int i = 0 ; i < t ; i++){

        cin >> a >> b ; 

        if(can_empty(a, b)){
            cout << "YES" << "\n";
        }

        else{

            cout << "NO" << "\n"; 

        }

    }

}