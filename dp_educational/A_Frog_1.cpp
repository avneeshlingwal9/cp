#include <bits/stdc++.h>
using namespace std; 

int findMinCost(vector<int>& stones, int i , vector<int>& dp){

    if(i >= stones.size() - 1){
        return 0; 
    }
    
    if(dp[i] != -1){

        return dp[i]; 

    }

    int jump1 = INT_MAX , jump2 = INT_MAX ;



    if(i + 1 < stones.size()){

        jump1 = abs(stones[i] - stones[i + 1]) + findMinCost(stones, i + 1 , dp);

    }

    if(i + 2 < stones.size()){

        jump2 = abs(stones[i] - stones[i + 2]) + findMinCost(stones, i + 2, dp);



    }

    return dp[i] = min(jump1 , jump2); 

}

int main(void){

    int n; 
    cin >> n; 

    if(n == 1){

        cout << 0 << "\n";
        return 0; 

    }

    vector<int> stones(n); 

    vector<int> dp(n + 1, -1); 

    for(int i = 0 ; i < n; i++){

        cin >> stones[i]; 
    }


    dp[0] = 0; 
    dp[1] = 0; 
    dp[2] = abs(stones[1] - stones[0]); 

    for(int i = 3;  i <= n ; i++){

        int costJump1 = dp[i - 1] + abs(stones[i - 1] - stones[i - 2]); 

        int costJump2 = dp[i - 2] + abs(stones[i - 1] - stones[i - 3]);

        dp[i] = min(costJump1, costJump2);
    }


    cout << dp[n] << endl; 



}