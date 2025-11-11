#include <bits/stdc++.h>
using namespace std;
using ll = long long; 



int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n ; 
    
    cin >> n; 

    long long sum = (n *1ll * (n + 1))/2; 

    if(sum & 1){

        cout << "NO" << endl; 

    }

    else{

        vector<bool> taken(n + 1 , false); 

        long long toFind = sum/2; 

        int count = 0; 

        ll sum_1 = 0;

        ll max_e = n ; 

        while(sum_1 < toFind){

            ll remaining_sum = toFind - sum_1; 

            if(remaining_sum > max_e){

                // Add the maximum element.

                taken[max_e] = true; 
                sum_1 += max_e; 

                max_e--; 


            }
            else{

                taken[remaining_sum] = true;
                sum_1 = toFind; 


            }
            count++; 

        }


        cout << "YES" << "\n";

        cout << count << "\n";

        for(int i = 1; i <= n; i++){
            if(taken[i]){

                cout << i << " ";

            }
        }
        cout << "\n" << n - count << "\n"; 

        for(int i = 1 ; i <= n ; i++){

            if(!taken[i]){

                cout << i << " "; 

            }

        }
        cout << "\n"; 

    }
    
}