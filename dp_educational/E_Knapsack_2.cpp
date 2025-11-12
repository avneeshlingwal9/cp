#include <vector>
#include <iostream>
#include <limits.h>
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

    long maxValue = 0; 
    int minVal = INT_MAX;

    for(int i = 0 ; i < N; i++){

        cin >> weights[i];
        
        cin >> value[i]; 

        minVal = min(minVal, value[i]);
        maxValue += value[i]; 
        
    }

    vector<long> dp(maxValue + 1 , INT_MAX); 

    dp[0] = 0 ; 


   

        // So, we check for each value now. 


        for(int j = 0; j < N; j++){

            int currVal = value[j]; 

            for(int i = maxValue ; i >= currVal; i--){


                dp[i] = min(dp[i], dp[i - currVal] + (long)weights[j]); 

            

            }


        }


    

    int ans = INT_MIN; 

    for(int i = minVal; i <= maxValue ; i++){

        if(dp[i]  <= W){
               
            ans = max(ans, i); 
            

        }
    

    }

    cout << ans << " "; 







}