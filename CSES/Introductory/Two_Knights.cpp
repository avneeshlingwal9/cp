#include <iostream>
using namespace std;
using ll = long long ; 

// Essentially removing the 2*3 and 3*2 blocks from all possible positions. 

ll findWays(ll k){

    if(k == 1){
        return 0; 
    }


    ll total = k * k ; 

    ll totalWays = (total *(total - 1))/ 2; 
    
    return totalWays - 4 * (k - 1) * (k - 2); 

}

int main(){


    int n ; 

    cin >> n; 

    for(int i = 1; i <= n; i++){


        cout << findWays(i) << "\n"; 


    }



}