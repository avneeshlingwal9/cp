#include <iostream>
#include <vector>
#include <limits.h>

using namespace std; 



int findMinCost(vector<int>& stones, int i , int k , vector<int>& dp){


    if(i >= stones.size() - 1){

        return 0; 
    }

    if(dp[i] != -1){

        return dp[i]; 

    }

    int absMin = INT_MAX;

    for(int j = 1 ; j <= k ; j++){

        if(j + i  >= stones.size()){

            break;
        }

        int curCost = abs(stones[j + i] - stones[i]); 
        int nextCost =  findMinCost(stones, i + j , k , dp); 



        absMin = min(absMin, curCost + nextCost); 




    }

    return dp[i] = absMin;




}

int main(void){



    int n , k ; 

    cin >> n;
    cin >> k; 

    if(n == 1){

        return 0; 
    }

    vector<int> stones(n); 

    vector<int> dp(n + 1, INT_MAX);

    for(int i = 0 ; i < n ; i++){
        cin >> stones[i]; 
    }

    dp[0] = 0, dp[1] = 0; 

    dp[2] = abs(stones[1] -  stones[0]);
    
    for(int i = 3 ; i <= n ; i++){

        for(int j = 1; j <= k ; j++){

            if(j >= i){
                break;            
            }
            
            int currCost = dp[i - j] + abs(stones[i - 1] - stones[i - j - 1]); 

            dp[i] = min(currCost, dp[i]);

        } 
    }

    cout << dp[n] << endl; 


}