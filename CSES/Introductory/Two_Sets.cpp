#include <bits/stdc++.h>
using namespace std;
using ll = long long; 



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n ; 
    
    cin >> n; 

    ll sum = (n *1ll * (n + 1))/2; 

    if(sum & 1){

        cout << "NO" << endl; 

    }

    else{

        sum /= 2; 

        vector<int> set1, set2; 

        for(int i = n ;  i >= 1; i--){

            if(sum >= i){

                set1.push_back(i);
                sum -= i; 

            }
            else{

                set2.push_back(i); 

            }

        }


        cout << "YES" << "\n";

        cout << set1.size() << "\n";

        for(auto& x : set1){

            cout << x << " ";
        }

        cout << "\n" << set2.size() << "\n"; 

        for(auto& x: set2){

            cout << x << " "; 

        }

        cout << "\n"; 
        


    }





    
    
}