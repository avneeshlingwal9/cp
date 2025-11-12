#include <iostream>

using namespace std;

bool canWithdraw(int curr, int X , int C){


    return curr + (curr/1000)*C <= X; 

}

int main(void){

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    int X , C ; 

    cin >> X >> C ; 

    int maxAmount = 0 ; 

    int low = 1000 , high = X; 

    while(low <= high){

        int mid = low + (high - low)/2; 

        if(canWithdraw(mid , X , C)){

            maxAmount = max(maxAmount, mid); 

            low = mid + 1; 

        }

        else{

            high = mid - 1; 
        }


    }

    // Make the maxAmount to near thousamd.

    cout << (maxAmount/1000)*1000 << endl; 
}