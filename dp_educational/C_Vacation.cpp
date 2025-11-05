#include <vector>
#include <iostream>
#include <limits.h>


using namespace std;




int main(void){

    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int n ; 

    cin >> n; 

    vector<vector<int>> activities; 

    for(int i = 0; i < n ; i++){

        vector<int> curr(3,0); 

        cin >> curr[0];
        cin >> curr[1]; 
        cin >> curr[2]; 

        activities.push_back(curr);

    }
    
    vector<int> prev(4, 0), curr(4,0); 

    // dp[i][j], denotes the maximum fun after doing i - 1 activities and last activity was j - 1. 
    // So 0th row, when no activity was done, and 0th column, when last activity was nothing. 

    for(int i = 1 ; i <= n ; i++){

        for(int j = 1 ; j <= 3 ; j++){

            int maxVal = INT_MIN;

            for(int k = 1; k <= 3; k++){

                if(k != j){
                    maxVal = max(maxVal, prev[k]); 
                }
            }

            curr[j] = maxVal + activities[i - 1][j - 1]; 
        }

        // Swap curr and prev. 

        prev = curr; 


    }

    int maxVal = INT_MIN;
    
    for(int i = 1 ; i <= 3; i++){

        maxVal = max(maxVal, curr[i]); 
    }

    cout << maxVal; 


    return 0;
}