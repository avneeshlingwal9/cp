#include <vector>
#include <iostream>

using namespace std; 
int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // Take input. 

    int N = 0 , W = 0; 

    cin >> N;
    cin >> W;
    
    vector<int> weights(N , 0);
    vector<int> value(N, 0);

    for(int i = 0 ; i < N; i++){

        cin >> weights[i];
        
        cin >> value[i]; 

    }

    vector<vector<long>> dp(N + 1 , vector<long>(W + 1 , 0));

    long ans = 0; 

    for(int i = 1 ; i <= N ; i++){

        for(int j = 1 ; j <= W; j++){

            // dp[i][j] => max(not take , take)


            if(weights[i - 1] <= j){

                // Can take. 

                dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - weights[i - 1]] + value[i - 1]); 

            }
            else{

                dp[i][j] = dp[i - 1][j]; 
            }

        }


    }
    
    
    ans = dp[N][W]; 






    cout << ans << " ";


}